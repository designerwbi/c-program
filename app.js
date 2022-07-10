import React, { useState, useEffect } from 'react'
import logo from './logo.svg';
import './App.css';
import axios from "axios";
import MaterialTable from "material-table";
import SearchIcon from '@material-ui/icons';
import { DataGrid, GridColDef, GridValueGetterParams } from '@mui/x-data-grid';

import {
    MDBBreadcrumb,
    MDBBtn, MDBBtnGroup,
    MDBCol,
    MDBContainer,
    MDBRow,
    MDBTable,
    MDBTableBody,
    MDBTableHead
} from "mdb-react-ui-kit";

function App() {
const column=[
    {title:"Sr_No",field:"sr_no"},
    {title:"EstateOfficeCode",field:"EstateOfficeCode"},
    {title:"UrbanEstateCode",field:"UrbanEstateCode"},
    {title:"UrbanEstateName",field:"UrbanEstateName"},
    {title:"Address1",field:"Address1"},
    {title:"Address2",field:"Address2"},
    {title:"Address3",field:"Address3"},
    {title:"State",field:"State"},
    {title:"PIN",field:"PIN"},
    {title:"ZonePotential",field:"ZonePotential"},
    {title:"DateFrom",field:"DateFrom"},
    {title:"DateTo",field:"DateTo"},
    {title:"CreatedBy",field:"CreatedBy"},
    {title:"CreatedDate",field:"CreatedDate"},
    {title:"ModifiedBy",field:"ModifiedBy"},
    {title:"ModifiedDate",field:"ModifiedDate"},
]
    const [data, setData] = useState([]);
        const [value, setValue] = useState("");
    useEffect(() => {
        loadUserData();
    }, []);
    const loadUserData = async () => {
        return await axios
            .get("http://localhost:5000/users")
            .then((response) => setData(response.data))
            .catch((err) => console.log(err));
    };
    console.log("data", data);
    const handleSearch = async (e) => {
      e.preventDefault();
      return await axios.get(`http://localhost:5000/users?q=${value}`)
          .then((response)=>
        {
            setData(response.data);
            setValue("");
        })
          .catch((err)=>console.log(err));
        };
    const handleReset = () => {
      loadUserData();
    };
    return (
        <MDBContainer>
            <form style={{
                margin: "auto",
                padding:"15px",
                maxWidth:"400px",
                alignContent:"center",
            }}
            className="d-flex input-group w-auto"
            onSubmit={handleSearch}>
                <input searchIcon={<SearchIcon/>} type="text" placeholder="Search..." value={value} onChange={(e)=>setValue(e.target.value)}/>
                <MDBBtn type="submit" color="dark">Search</MDBBtn> <MDBBtn className="ms-2" color="info" onClick={() => handleReset()}>Reset</MDBBtn>
            </form>
            <div>
                <MDBRow>
                    <MDBCol size="12">
                        <MDBTable>
                            <MDBTableHead dark>
                                <tr>
                                    <th scope="col">Sr_No</th>
                                    <th scope="col">EstateOfficeCode</th>
                                    <th scope="col">UrbanEstateCode</th>
                                    <th scope="col">UrbanEstateName</th>
                                    <th scope="col">Address1</th>
                                    <th scope="col">Address2</th>
                                    <th scope="col">Address3</th>
                                    <th scope="col">State</th>
                                    <th scope="col">PIN</th>
                                    <th scope="col">ZonePotential</th>
                                    <th scope="col">DateFrom</th>
                                    <th scope="col">DateTo</th>
                                    <th scope="col">CreatedBy</th>
                                    <th scope="col">CreatedDate</th>
                                    <th scope="col">ModifiedBy</th>
                                    <th scope="col">ModifiedDate</th>
                                </tr>
                            </MDBTableHead>
                            {data.length === 0 ? (
                                <MDBTableBody className="mb-0">
                                    <tr>
                                        <td colSpan={8} className="text-center mb-0">
                                            No Data Found
                                        </td>
                                    </tr>
                                </MDBTableBody>
                            ) : (
                                data.map((item, index) => (
                                    <MDBTableBody key={index}>
                                       <tr>
                                            <td>{item.Sr_No}</td>
                                            <td>{item.EstateOfficeCode}</td>
                                            <td>{item.UrbanEstateCode}</td>
                                            <td>{item.UrbanEstateName}</td>
                                            <td>{item.Address1}</td>
                                            <td>{item.Address2}</td>
                                            <td>{item.Address3}</td>
                                            <td>{item.State}</td>
                                            <td>{item.PIN}</td>
                                            <td>{item.ZonePotential}</td>
                                            <td>{item.DateFrom}</td>
                                            <td>{item.DateTo}</td>
                                            <td>{item.CreatedBy}</td>
                                            <td>{item.CreatedDate}</td>
                                            <td>{item.ModifiedBy}</td>
                                            <td>{item.ModifiedDate}</td>
                                        </tr>
                                    </MDBTableBody>
                                                ))
                            )}
                        </MDBTable>
                    </MDBCol>
                </MDBRow>
            </div>
        </MDBContainer>






















    );
}

export default App;

