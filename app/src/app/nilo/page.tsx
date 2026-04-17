import BreadCrumb from "@/src/components/BreadCrumb";
import Header from "@/src/components/Header";
import Box from "@mui/material/Box";
import Divider from "@mui/material/Divider";
import Typography from "@mui/material/Typography";
import { antlr, antlr2, antlr3, aspectos, aspectosCompilacao, aspectosFim, aspectosInterpretador, codificacao, codificacao1, codificacao2, codificacao3, codificacao4, codificacao5, codificacao6, codificacao7, codificacao8, compiladores, conclusao, definir, definir2, definir3, definir4, definir5, estruturacao, estruturacao2, estruturacao3, estruturacao4, estruturacao5, estruturacao6, estruturacao7, estruturacao8, estruturacao9, fases, ferramentas, gramatica, gramatica2, intro, IR, lexica, lexica2, llvm, llvm2, maquina, maquina2, niloScript, niloScript2, otimizacao, quadro02, quadro03, quadro04, quadro05, quadro06, quadro07, quadro08, quadro09, quadro10, quadro11, quadro12, quadro13, quadro14, quadro15, quadro16, quadro17, quadro18, quadro19, reconhecer, reconhecer2, reconhecer3, reconhecer4, reconhecer5, reconhecer6, reconhecer7, reconhecer8, referencias, semantica, sintatica, sintatica2, tabelaSimbolo2, tabelaSimbolos, tableAspectos, teste, teste2, teste3, teste4, teste5, teste6 } from "./texts";
import Image from "next/image";
import interpretador from "../../../public/img/interpretador.jpg"
import compilador from "../../../public/img/compilador.jpg"
import image03 from "../../../public/img/03.jpg"
import image04 from "../../../public/img/04.jpg"
import image05 from "../../../public/img/05.jpg"
import image06 from "../../../public/img/06.jpg"
import image07 from "../../../public/img/07.png"
import image08 from "../../../public/img/08.jpg"
import image09 from "../../../public/img/09.jpg"
import image10 from "../../../public/img/10.jpg"
import image11 from "../../../public/img/11.jpg"
import image12 from "../../../public/img/12.jpg"
import image13 from "../../../public/img/13.jpg"
import image14 from "../../../public/img/14.jpg"
import image15 from "../../../public/img/15.jpg"
import image16 from "../../../public/img/16.jpg"
import image17 from "../../../public/img/17.jpg"
import image18 from "../../../public/img/18.jpg"
import image19 from "../../../public/img/19.jpg"
import image20 from "../../../public/img/20.jpg"
import image21 from "../../../public/img/21.jpg"
import image22 from "../../../public/img/22.jpg"
import image23 from "../../../public/img/23.jpg"
import image24 from "../../../public/img/24.jpg"
import image25 from "../../../public/img/25.jpg"
import image26 from "../../../public/img/16.jpg"
import image27 from "../../../public/img/27.jpg"
import image28 from "../../../public/img/28.jpg"
import image29 from "../../../public/img/29.jpg"
import image30 from "../../../public/img/30.jpg"


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
    const textSubTitle = {
        mt: "8px",
        fontFamily: "Roboto, sans-serif",
        fontSize: { xs: "1rem", md: "1.5rem" },
        fontWeight: "300",
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
                mt: {xs:"80px",md:"180px"},
                fontFamily: "Roboto, sans-serif",
                fontSize: { xs: "1rem", md: "1.2rem" },
                lineHeight: 1.8,
                color: "#042B3A",
                paddingBottom: "8px"
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


            <Typography
                sx={textTitle}
            >
                2 ASPECTOS ESTRUTURAIS E UTILITÁRIOS DE LINGUAGENS 
            </Typography>
            <Typography
                sx={textNormal}
            >
                {aspectos}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                2.1 TRADUÇÃO DE CÓDIGO
            </Typography>
            <Typography
                sx={textNormal}
            >
                {aspectosInterpretador}
            </Typography>
            <Image alt="interpretador" src={interpretador} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {aspectosCompilacao}
            </Typography>
            <Image alt="interpretador" src={compilador} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {aspectosFim}
            </Typography>
            <Box sx={{ width: {md:"65%", xs:"100%"} }}>
                {tableAspectos}
            </Box>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                2.2 GRAMÁTICAS
            </Typography>
            <Typography
                sx={textNormal}
            >
                {gramatica}
            </Typography>
            <Image alt="gramatica" src={image03} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {gramatica2}
            </Typography>
             <Typography
                sx={textSubTitle}
            >
                2.3 TABELA DE SÍMBOLOS
            </Typography>
            <Typography
                sx={textNormal}
            >
                {tabelaSimbolos}
            </Typography>
            <Image alt="tabelaSimbolos" src={image04} width={200} style={{marginLeft:"70px"}}/>
             <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {tabelaSimbolo2}
            </Typography>
            <Typography
                sx={textTitle}
            >
                3 COMPILADORES
            </Typography>
            <Typography
                sx={textNormal}
            >
                {compiladores}
            </Typography>
            <Image alt="tabelaSimbolos" src={image05} width={300} style={{marginLeft:"20px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora adaptado de AHO et al.(2007, p.05)."}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                3.1 ANÁLISE LÉXICA
            </Typography>
            <Typography
                sx={textNormal}
            >
                {lexica}
            </Typography>
            <Image alt="tabelaSimbolos" src={image06} width={200} style={{marginLeft:"70px"}}/>
             <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {lexica2}
            </Typography>
             <Typography
                sx={textSubTitle}
            >
                3.2 ANÁLISE SINTÁTICA
            </Typography>
            <Typography
                sx={textNormal}
            >
                {sintatica}
            </Typography>
            <Image alt="sintatica" src={image07} width={200} style={{marginLeft:"70px"}}/>
             <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {sintatica2}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                3.3 ANÁLISE SEMÂNTICA
            </Typography>
            <Typography
                sx={textNormal}
            >
                {semantica}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                3.4 REPRESENTAÇÃO INTERMEDIÁRIA
            </Typography>
            <Typography
                sx={textNormal}
            >
                {IR}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                3.5 OTIMIZAÇÃO
            </Typography>
            <Typography
                sx={textNormal}
            >
                {otimizacao}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                3.6 CÓDIGO DE MÁQUINA
            </Typography>
            <Typography
                sx={textNormal}
            >
                {maquina}
            </Typography>
            <Image alt="sintatica" src={image08} width={300} style={{marginLeft:"20px"}}/>
             <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora adaptando de AHO et al. (2007)."}
                {maquina2}
            </Typography>
            <Typography
                sx={textTitle}
            >
                4 FERRAMENTAS UTILIZADAS 
            </Typography>
            <Typography
                sx={textNormal}
            >
                {ferramentas}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                4.1 LINGUAGEM NILOSCRIPT
            </Typography>
            <Typography
                sx={textNormal}
            >
                {niloScript}
            </Typography>
            <Image alt="niloScript" src={image09} width={300} style={{marginLeft:"20px"}}/>
             <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {niloScript2}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                4.2 ANTLR
            </Typography>
            <Typography
                sx={textNormal}
            >
                {antlr}
            </Typography>
            <Image alt="antlr" src={image10} width={300} style={{marginLeft:"20px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {antlr2}
            </Typography>
            {quadro02}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {antlr3}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                4.3 LLVM
            </Typography>
            <Typography
                sx={textNormal}
            >
                {llvm}
            </Typography>
            {quadro03}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {llvm2}
            </Typography>
            <Typography
                sx={textTitle}
            >
                5 FASES DO NILO
            </Typography>
            <Typography
                sx={textNormal}
            >
                {fases}
            </Typography>
            <Image alt="fases" src={image11} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                5.1 RECONHECIMENTO 
            </Typography>
            <Typography
                sx={textNormal}
            >
                {reconhecer}
            </Typography>
            <Image alt="perguntas" src={image12} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
            </Typography>
            <Typography
                sx={textNormal}
            >
                {reconhecer2}
            </Typography>
            <Image alt="artefatos reconhecer" src={image13} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {reconhecer3}
            </Typography>
            {quadro04}
            <Typography
                sx={textNormal}
            >
                {reconhecer4}
            </Typography>
            <Image alt="texto síntese" src={image14} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {reconhecer5}
            </Typography>
            {quadro05}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {reconhecer6}
            </Typography>
            <Image alt="lista de demandas" src={image15} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {reconhecer7}
            </Typography>
            {quadro06}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {reconhecer8}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                5.2 DEFINIÇÃO 
            </Typography>
            <Typography
                sx={textNormal}
            >
                {definir}
            </Typography>
            <Image alt="lista de demandas" src={image16} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {definir2}
            </Typography>
            {quadro07}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {definir3}
            </Typography>
            {quadro08}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {definir4}
            </Typography>
            {quadro09}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {definir5}
            </Typography>
            {quadro10}
            <Typography
                sx={textSubTitle}
            >
                5.3 ESTRUTURAÇÃO
            </Typography>
            <Typography
                sx={textNormal}
            >
                {estruturacao}
            </Typography>
            <Image alt="lista de artefatos" src={image17} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {estruturacao2}
            </Typography>
            {quadro11}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora.\nQuadro 12 - Ambientes de desenvolvimento integrados (IDE)"}
            </Typography>
            {quadro12}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {estruturacao3}
            </Typography>
            {quadro13}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {estruturacao4}
            </Typography>
            {quadro14}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {estruturacao5}
            </Typography>
            <Image alt="arquitetura" src={image18} width={300} style={{marginLeft:"20px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {estruturacao6}
            </Typography>
            <Image alt="diretórios" src={image19} width={250} style={{marginLeft:"20px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {estruturacao7}
            </Typography>
            <Image alt="organograma" src={image20} width={300} style={{marginLeft:"20px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {estruturacao8}
            </Typography>
            <Image alt="fluxo trabalho" src={image21} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {estruturacao9}
            </Typography>
            <Image alt="licenciamento" src={image22} width={250} style={{marginLeft:"20px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                5.4 CODIFICAÇÃO
            </Typography>
            <Typography
                sx={textNormal}
            >
                {codificacao}
            </Typography>
            <Image alt="lista de artefatos" src={image23} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {codificacao1}
            </Typography>
            <Image alt="gramática" src={image24} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {codificacao2}
            </Typography>
            {quadro15}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {codificacao3}
            </Typography>
            <Image alt="comando" src={image25} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {codificacao4}
            </Typography>
            <Image alt="sequência de chamadas" src={image26} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {codificacao5}
            </Typography>
            <Image alt="ast" src={image27} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {codificacao6}
            </Typography>
            <Image alt="comando" src={image28} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {codificacao7}
            </Typography>
            <Image alt="geração de código de máquina" src={image29} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {codificacao8}
            </Typography>
            <Typography
                sx={textSubTitle}
            >
                5.5 TESTE
            </Typography>
            <Typography
                sx={textNormal}
            >
                {teste}
            </Typography>
            {quadro16}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {teste2}
            </Typography>
            {quadro17}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {teste3}
            </Typography>
            {quadro18}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {teste4}
            </Typography>
            {quadro19}
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {teste5}
            </Typography>
            <Image alt="teste" src={image30} width={200} style={{marginLeft:"70px"}}/>
            <Typography
                sx={textNormal}
            >
                {"\t\tFonte: A autora."}
                {teste6}
            </Typography>
            <Typography
                sx={textTitle}
            >
                6 CONCLUSÃO
            </Typography>
            <Typography
                sx={textNormal}
            >
                {conclusao}
            </Typography>
            <Typography
                sx={textTitle}
            >
                REFERÊNCIAS
            </Typography>
            <Typography
                sx={textNormal}
            >
                {referencias}
            </Typography>
        </Box>
    </>
}