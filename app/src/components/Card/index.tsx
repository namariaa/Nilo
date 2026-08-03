import Card from '@mui/material/Card';
import CardHeader from "@mui/material/CardHeader";
import NextLink from 'next/link';

interface CardProps {
    icon: React.ReactNode;
    label: string;
    description: string;
    link?: string;
}

export default function Cards (props: CardProps): React.ReactNode {
    const {icon,label,link, description} = props;
    const isExternalLink = link?.startsWith("http");
 
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
            {link ? (
                <NextLink
                    href={link}
                    target={isExternalLink ? "_blank" : undefined}
                    rel={isExternalLink ? "noopener noreferrer" : undefined}
                    prefetch={isExternalLink ? false : undefined}
                >
                    <CardHeader
                        avatar={
                        icon
                        }
                        title={label}
                        subheader={description}
                    />
                </NextLink>
            ) : (
                <CardHeader
                    avatar={
                    icon
                    }
                    title={label}
                    subheader={description}
                />
            )}
        </Card>
    )
}
