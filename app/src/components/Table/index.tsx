import Box from '@mui/material/Box';
import { DataGrid, GridColDef, GridRowsProp } from '@mui/x-data-grid';

interface TableProps {
    rows: GridRowsProp[];
    columns: GridColDef[];
}

export default function Table (props: TableProps): React.ReactNode {
  const {rows, columns} = props;

    return (
      <Box sx={{ height: 400, width: '100%' }}>
        <DataGrid
          rows={rows}
          columns={columns}
          disableRowSelectionOnClick
          disableColumnSorting
          disableColumnFilter
          disableColumnMenu
          hideFooter
        />
    </Box>
    )
}