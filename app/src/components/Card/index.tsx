import Card from '@mui/material/Card';
import CardHeader from "@mui/material/CardHeader";
import Link from 'next/link';

interface CardProps {
    icon: React.ReactNode;
    label: string;
    description: string;
    link?: string;
}

export default function Cards (props: CardProps): React.ReactNode {
    const {icon,label,link, description} = props;
 
    return (
        <Card 
            sx={{
                width: { xs: "90%", md: "350px" },
                cursor: "pointer",
                transition: "all 0.3s ease",
                borderRadius: "16px",
                boxShadow: "0 4px 20px rgba(0,0,0,0.08)",

                "&:hover": {
                transform: "translateY(-6px) scale(1.02)",
                boxShadow: "0 12px 30px rgba(0,0,0,0.15)",
                },
            }}
        >
            {!link ? (
                <Link href={"/processo.pdf"} 
                download="Processo NILO.pdf"
                >
                <CardHeader
                    avatar={
                    icon
                    }
                    title={label}
                    subheader={description}
                />
                </Link>
            ) : (
                <Link href={link} 
                target="_blank"
                rel="noopener noreferrer"
                >
                    <CardHeader
                        avatar={
                        icon
                        }
                        title={label}
                        subheader={description}
                    />
                </Link>
            )}
        </Card>
    )
}