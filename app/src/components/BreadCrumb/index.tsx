"use client"

import Breadcrumbs from "@mui/material/Breadcrumbs";
import MuiLink from "@mui/material/Link";
import Typography from "@mui/material/Typography";

interface crumb {
  link?: string;
  label: string;
}

interface BreadCrumbProps {
  childrens: crumb[];
}

export default function BreadCrumb (props: BreadCrumbProps): React.ReactNode {
  const {childrens} = props;
  
  return (
    <Breadcrumbs aria-label="breadcrumb">
      
    {childrens.map((crumb: crumb) => {
      if (crumb.link){
        return <MuiLink
              href={crumb.link}
              color="inherit"
              key={crumb.label}
              underline="hover"
            >
              {crumb.label}
            </MuiLink>
      
      }
      else {
        return <Typography sx={{ color: 'text.primary' }} key={crumb.label}>{crumb.label}</Typography>
       
      }
    })} 
    </Breadcrumbs>
  )
}