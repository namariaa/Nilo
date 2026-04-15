import BreadCrumb from "@/src/components/BreadCrumb";
import Header from "@/src/components/Header";
import Box from "@mui/material/Box";
import Divider from "@mui/material/Divider";
import Typography from "@mui/material/Typography";
import { intro } from "./texts";

export default function Nilo():React.ReactNode {
    const textNormal = {
        mt: "4px",
        fontFamily: "Roboto, sans-serif",
        fontSize: { xs: "0.8rem", md: "1rem" },
        color: "#042B3A",
        whiteSpace: "pre-wrap",
        fontWeight: "300",
    }

    const textTitle = {
        mt: "16px",
        fontFamily: "Roboto, sans-serif",
        fontSize: { xs: "1rem", md: "1.5rem" },
        fontWeight: "500",
        color: "#042B3A",
    }
    return <>
        <Header type="default" /> 
        <Box
            sx={{
            position: "fixed",
            inset: 0,
            backgroundColor: "#F2ECCA",
            zIndex: -1,
            }}
        />
        <Box
            sx={{
                px:4,
                mt: "180px",
                fontFamily: "Roboto, sans-serif",
                fontSize: { xs: "1rem", md: "1.2rem" },
                lineHeight: 1.8,
                color: "#042B3A",
            }}
        >
            <BreadCrumb childrens={[{link:"/", label:"Página Inicial"}, {label:"NILO"}]} />
            <Typography
                sx={{
                mt: "24px",
                fontFamily: "Roboto, sans-serif",
                fontSize: { xs: "1.2rem", md: "2rem" },
                color: "#042B3A",
                fontWeight: "700",
            }}
            >
                NILO - Processo de Desenvolvimento de Linguagens de Programação Simplificadas
            </Typography>
            <Divider/>
            <Typography
                sx={textTitle}
            >
                1 INTRODUÇÃO
            </Typography>
            <Typography
                sx={textNormal}
            >
                {intro}
            </Typography>
        </Box>
    </>
}