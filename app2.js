import React, {useState} from "react";
import './App.css';
import MaterialTable from 'material-table'
class App extends React.Component {
	// Constructor
	constructor(props) {
		const [tableData,setTableData] = useState([])

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
		super(props);

		this.state = {
			items: [],
			DataisLoaded: false
		};
	}

	// ComponentDidMount is used to
	// execute the code
	componentDidMount() {
		fetch(
"https://jsonplaceholder.typicode.com/users")
			.then((res) => res.json())
			.then((json) => {
				this.setState({
					items: json,
					DataisLoaded: true
				});
			})
	}
	render() {
		const { DataisLoaded, items } = this.state;
		if (!DataisLoaded) return <div>
			<h1> Pleses wait some time.... </h1> </div> ;

		return (
		<div className = "App">
			<h1> Fetch data from an api in react </h1> {
				items.map((item) => (
				<ol key = { item.id } >
					User_Name: { item.username },
					Full_Name: { item.name },
					User_Email: { item.email }
					</ol>
				))
			}
		</div>
	);
}
}

export default App;
