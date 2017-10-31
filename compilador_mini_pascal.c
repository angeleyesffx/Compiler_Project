/*palavras reservadas*/ 
#define _AND            101
#define _BOOLEAN        102
#define _BEGIN          103
#define _DO             104
#define _END            105
#define _ELSE           106
#define _FALSE          107
#define _INTEGER        108
#define _IF             109
#define _NOT            110
#define _OR             111
#define _PROCEDURE      112
#define _PROGRAM        113
#define _THEN           114
#define _TRUE           115
#define _VAR            116
#define _WRITE          117
#define _WHILE          118
/*operadores*/
#define _IGUAL          201
#define _OPMULT         202
#define _OPADI          203
#define _OPSUB          204
#define _MAIOR          205
#define _MENOR          206
#define _MAIORIGUAL     207
#define _MENORIGUAL     208
#define _ATRIBUICAO     209
#define _DIFERENTE      210
#define _DIV            211
/*digitos*/
#define _NUMBER         300
/*letras*/
#define _LETTER         400
/*delimitadores*/
#define _PNT            501
#define _VRGL           502
#define _PNTVRGL        503
#define _DSPNT          504
#define _ABREP          505
#define _FECHAP         506

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/*Método leitor - Automato responsável pela identificação de palavras reservadas da linguagem mini pascal
Lista de palavras reservadas:            |  Lista de operadores:   | 
and        begin       boolean    div    |  +	-	* 	) 	;	(  |
do         else        end.       false  |    :=  :  >=	 >	<=     |  
if         integer     not        program|    <>  <   ,   :=       |
procedure  true        then       or     |  Lista de numerais:     |
var        write       while             | 0-1-2-3-4-5-6-7-8-9     |
*/
int leitor(char str[],int *p) {
  int i = *p;
	int erro = 0;

	goto Q0;

	Q0:
	    i++;
	    if(str[i] == ' ')
		    return -1;
		if(str[i] == '\n')
		    return 1;       	
	    if ((str[i] == '0')||(str[i] == '1')||(str[i] == '2')||(str[i] == '3')||(str[i] == '4')||(str[i] == '5')||(str[i] == '6')||(str[i] == '7')||(str[i] == '8')||(str[i] == '9')){
	        goto Q90;
	    } else {
	        if(str[i] == 'a'){
		       	goto Q42;
	        } else {
				if (str[i] == 'b'){
	                goto Q59;
	            } else {
	                if (str[i] == 'd'){
	                    goto Q72;
	                } else {
	                   	if (str[i] == 'e'){
	                        goto Q1;
	                    } else {
	                        if (str[i] == 'f'){
	                            goto Q45;
	                        } else {
	                            if (str[i] == 'i'){
	                                goto Q28;
	                            } else {
	                                if (str[i] == 'n'){
	                                    goto Q39;
	                                } else {
	                                    if (str[i] == 'o'){
	                                        goto Q74;
	                                    } else {
	                                        if (str[i] == 'p'){
	                                            goto Q15;
	                                        } else {
	                                            if (str[i] == 't'){
	                                                goto Q8;
	                                            } else {
	                                                if (str[i] == 'v'){
	                                                    goto Q36;
	                                                } else {
	                                                    if (str[i] == 'w'){
	                                                        goto Q50;
	                                                    } else {
	                                                        if (str[i] == '<'){
	                                                            goto Q76;
	                                                        } else {
	                                                        	if (str[i] == '>'){
	                                                                goto Q79;
	                                                            } else {
	                                                             	if (str[i] == ':'){
	                                                                    goto Q81;
	                                                                } else {
																		if (str[i] == ','){
																		    goto Q83;
																		} else {
																			if (str[i] == '('){
																		        goto Q84;
																			} else {
																			    if (str[i] == ';'){
																			        goto Q85;
																			    } else {
																			        if (str[i] == ')'){
																			            goto Q86;
																			        } else {
																			            if (str[i] == '*'){
																			                goto Q87;
																			            } else {
																			                if (str[i] == '-'){
																			                    goto Q88;
																			                } else {
																			                    if (str[i] == '+'){
																			                        goto Q89;
																			                    } else {
																			                        if (str[i] == '.'){
																			                            goto Q92;    
																			                        } else {
																			                            goto Q91;
																							 	   }
																							    }
																							 }
																						}
																					}
																				}
																		    }
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
		    	}
		    }
		}
	/*else*/ /*end.*/
	Q1:
	    i++;
	    if(str[i] == 'n'){
			goto Q5;
	    } else {
	        if(str[i] == 'l'){
		       goto Q2;
		    } else {    
		        if ((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;
		        } else {
		           return _LETTER;
		        }
    	   }
        }
	Q2:
	    i++;
	    if(str[i] == 's'){
			goto Q3;
		 } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        }   
	Q3:
	    i++;
	    if(str[i] == 'e'){
			goto Q4;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        }   
	Q4:
		i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _ELSE;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        }   
	Q5:
	    i++;
	    if(str[i] == 'd'){
		   *p = i;
		   goto Q6;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q6:
	    i++;
	    if(str[i] == ' '){
          *p = i;
           return _END;
        } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	/*true*/ /*then*/
	Q8:
	    i++;
	    if(str[i] == 'r'){
			goto Q9;
	    } else {
	        if(str[i] == 'h'){
		       goto Q12;
	       } else {    
			    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
		            return 0;    
		        } else {
		        	return _LETTER;
		        }
	        } 
        }
	Q9:
	    i++;
	    if(str[i] == 'u'){
			goto Q10;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q10:
	    i++;
	    if(str[i] == 'e'){
			goto Q11;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q11:
		i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _TRUE;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q12:
	    i++;
	    if(str[i] == 'e'){
			goto Q13;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q13:
	    i++;
	    if(str[i] == 'n'){
			goto Q14;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q14:
		i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _THEN;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	/*program*/ /*procedure*/
	Q15:
	    i++;
	    if(str[i] == 'r'){
			goto Q16;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q16:
	    i++;
	    if(str[i] == 'o'){
			goto Q17;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q17:
	    i++;
	    if(str[i] == 'g'){
			goto Q18;
	    } else {
	        if(str[i] == 'c'){
		       goto Q22;
	        } else {    
			    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
		            return 0;    
		        } else {
		        	return _LETTER;
		        }
	        }
    	}
	Q18:
	    i++;
	    if(str[i] == 'r'){
			goto Q19;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q19:
	    i++;
	    if(str[i] == 'a'){
			goto Q20;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q20:
	    i++;
	    if(str[i] == 'm'){
			goto Q21;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q21:
		i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _PROGRAM;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q22:
	    i++;
	    if(str[i] == 'e'){
			goto Q23;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q23:
	    i++;
	    if(str[i] == 'd'){
			goto Q24;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q24:
	    i++;
	    if(str[i] == 'u'){
			goto Q25;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q25:
	    i++;
	    if(str[i] == 'r'){
			goto Q26;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q26:
	    i++;
	    if(str[i] == 'e'){
			goto Q27;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q27:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _PROCEDURE;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	/*if*/ /*integer*/
	Q28:
	    i++;
	    if(str[i] == 'n'){
			goto Q30;
	        } else {
	           if(str[i] == 'f'){
		          goto Q29;
	            } else {    
		            if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	                  return 0;    
	                } else {
	        	        return _LETTER;
	                }
                } 
           }
	Q29:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _IF;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q30:
	    i++;
	    if(str[i] == 't'){
			goto Q31;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q31:
	    i++;
	    if(str[i] == 'e'){
			goto Q32;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q32:
	    i++;
	    if(str[i] == 'g'){
			goto Q33;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q33:
	    i++;
	    if(str[i] == 'e'){
			goto Q34;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
    Q34:
	    i++;
	    if(str[i] == 'r'){
			goto Q35;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q35:
		i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _INTEGER;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	/*var*/
    Q36:
	    i++;
	    if(str[i] == 'a'){
			goto Q37;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q37:
	    i++;
	    if(str[i] == 'r'){
			goto Q38;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q38:
		i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _VAR;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	/*not*/
	Q39:
	    i++;
	    if(str[i] == 'o'){
			goto Q40;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q40:
	    i++;
	    if(str[i] == 't'){
			goto Q41;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q41:
		i++;
	    if (str[i] == ' ') {
           *p = i;
	        return _NOT;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	/*and*/
	Q42:
	    i++;
	    if(str[i] == 'n'){
			goto Q43;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q43:
	    i++;
	    if(str[i] == 'd'){
			goto Q44;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q44:
		i++;
	    if (str[i] == ' ') {
           *p = i;
	        return _AND;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	/*false*/
	Q45:
	    i++;
	    if(str[i] == 'a'){
			goto Q46;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q46:
	    i++;
	    if(str[i] == 'l'){
			goto Q47;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q47:
	    i++;
	    if(str[i] == 's'){
			goto Q48;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q48:
	    i++;
	    if(str[i] == 'e'){
			goto Q49;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q49:
		i++;
	    if (str[i] == ' ') {
           *p = i;
	        return _FALSE;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	/*write*/ /*while*/
	Q50:
	    i++;
	    if(str[i] == 'r'){
			goto Q51;
	    } else {
	         if(str[i] == 'h'){
		    	goto Q55;
		        } else {    
			    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
		            return 0;    
		        } else {
		        	return _LETTER;
		        }
	        }
		}
	Q51:
	    i++;
	    if(str[i] == 'i'){
			goto Q52;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q52:
	    i++;
	    if(str[i] == 't'){
			goto Q53;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q53:
	    i++;
	    if(str[i] == 'e'){
			goto Q54;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q54:
		i++;
	    if (str[i] == ' ') {
           *p = i;
	        return _WRITE;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q55:
	    i++;
	    if(str[i] == 'i'){
			goto Q56;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q56:
	    i++;
	    if(str[i] == 'l'){
			goto Q57;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q57:
	    i++;
	    if(str[i] == 'e'){
			goto Q58;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q58:
		i++;
	    if (str[i] == ' ') {
           *p = i;
	        return _WHILE;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	/*begin*/ /*boolean*/
	Q59:
	    i++;
	    if(str[i] == 'e'){
			goto Q60;
		} else{
		    if (str[i] == 'o'){
		        goto Q64;
		    } else {    
			    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
		            return 0;    
		        } else {
		        	return _LETTER;
		        }
		    } 
		}
	Q60:
	    i++;
	    if(str[i] == 'g'){
			goto Q61;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q61:
	    i++;
	    if(str[i] == 'i'){
			goto Q62;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q62:
	    i++;
	    if(str[i] == 'n'){
			goto Q63;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q63:
		i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _BEGIN;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q64:
	    i++;
	    if(str[i] == 'o'){
			goto Q65;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q65:
	    i++;
	    if(str[i] == 'l'){
			goto Q66;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q66:
	    i++;
	    if(str[i] == 'e'){
			goto Q67;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q67:
	    i++;
	    if(str[i] == 'a'){
			goto Q68;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q68:
	    i++;
	    if(str[i] == 'n'){
			goto Q69;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q69:
		i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _BOOLEAN;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	/*div*/ /*do*/
	Q70:
		i++;
	    if(str[i] == 'v'){
			goto Q71;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q71:
		i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _DIV;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q72:
	    i++;
	    if(str[i] == 'o'){
			goto Q73;
	    } else {
	         if(str[i] == 'i'){
			    goto Q70;
	        } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        }
	}
	Q73:
		i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _DO;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	 /*or*/
	Q74:
	    i++;
	    if(str[i] == 'r'){
			goto Q73;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	Q75:
		i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _OR;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	            return 0;    
	        } else {
	        	return _LETTER;
	        }
        } 
	/*<*/
	Q76:
	    i++;
	    if(str[i] == '>'){
			goto Q77;
	    } else {
	        if(str[i] == '='){
		   	   goto Q78;
	        } else {
	            if(str[i] == ' '){
                   *p = i;
		   	        return _MENOR;
	            } else {
	    	        return 0;
	        }
    	}
   }
	/*<>*/
	Q77:
	    i++;
	    if(str[i] == ' '){
        *p = i;
			  return _DIFERENTE;
	    } else {
	    	return 0;
	    }
	/*<=*/
	Q78:
	    i++;
	    if(str[i] == ' '){
        *p = i;
			return _MENORIGUAL;
	    } else {
	    	return 0;
	    }
	/*>*/
	Q79:
	    i++;
	    if(str[i] == '='){
			goto Q80;
	    } else {
	        if(str[i] == ' '){
            *p = i;
		   	   return _MAIOR;
	       } else {
	    	   return 0;
	    }
	}
	/*>=*/	
	Q80:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _MAIORIGUAL;
	    }  else {
	         return 0;
		}
	/*:*/
	Q81:
	    i++;
	    if(str[i] == '='){
			goto Q82;
	    } else {
	        if(str[i] == ' '){
            *p = i;
		   	   return _DSPNT;
	       } else {
	    	   return 0;
	    }
	}
	/*:=*/
	Q82:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _ATRIBUICAO;
	    }  else {
	    	 return 0;
		}
	/*,*/ 	
	Q83:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _VRGL;
	    }  else {
	    	 return 0;
		}
	/*(*/ 
	Q84:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _ABREP;
	    }  else {
	    	 return 0;
		}
	/*;*/
	Q85:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _PNTVRGL;
	    }  else {
	    	 return 0;
		}
	/*)*/ 
	Q86:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _FECHAP;
	    }  else {
	    	 return 0;
		}
	/***/ 
	Q87:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _OPMULT;
	      }else {
	    	 return 0;
		}
	/*-*/
	Q88:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _OPSUB;
	      }else {
	    	 return 0;
		}
	/*+*/ 	
	Q89:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _OPADI;
	      }else {
	    	 return 0;
		}
	/*0-1-2-3-4-5-6-7-8-9*/
	Q90:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _NUMBER;
	    } else {
	        if ((str[i] == '0')||(str[i] == '1')||(str[i] == '2')||(str[i] == '3')||(str[i] == '4')||(str[i] == '5')||(str[i] == '6')||(str[i] == '7')||(str[i] == '8')||(str[i] == '9')){
	            goto Q90;
	        } else {
	   	     	return 0;
	    	}
    	}
    	 /*.*/ 	
	Q92:
	    i++;
	    if (str[i] == ' ') {
          *p = i;
	        return _PNT;
	      }else {
	    	 return 0;
		} 
    /*demais caracteres lidos*/
	Q91:
	    i++;
	    if (str[i] == ' ') {
           *p = i;
	        return _LETTER;
	    } else {    
		    if((str[i] == '.')||(str[i] == ':')||(str[i] == ';')||(str[i] == ',')||(str[i] == '<')||(str[i] == '>')||(str[i] == '=')||(str[i] == '-')||(str[i] == '+')||(str[i] == '*')||(str[i] == ')')||(str[i] == '(')){
	          return 0;    
	        } else {
	          goto Q91;
	        }
        }   
	return 1;
}

/*Buffer que irá armazenar os tokens lidos pelo analizador léxico*/
struct Node{
 int num;
 struct Node *prox;
};
typedef struct Node node;

int tam;

void inicia(node *PILHA);
void exibe(node *PILHA);
void libera(node *PILHA);
node *pop(node *PILHA);
//inicia o buffer
void inicia(node *PILHA)
{
 PILHA->prox = NULL;
 tam=0;
}
//verifica se o buffer está vazio
int vazia(node *PILHA){
    if(PILHA->prox == NULL)
       return 1;
    else
       return 0;
}
//aloca o token lido no analisador léxico
node *aloca(int elem){
    node *novo=(node *) malloc(sizeof(node));
	if(!novo){
       printf("Sem memoria disponivel!\n");
  	   exit(1);
	}else{
	   novo->num = elem;
	   return novo;
	}
}
//exibe os elementos dentro do buffer
void exibe(node *PILHA){
    int count=0;
	if(vazia(PILHA)){
	   printf("PILHA vazia!\n\n");
    }
	node *tmp;
	tmp = PILHA->prox;
	printf("TOKENS NO BUFFER:\n");
	while( tmp != NULL){
	  printf("<%d,%d>\n", tmp->num,count);
	  tmp = tmp->prox;
	  count++;
    }

}
//libera o buffer 
void libera(node *PILHA){
    if(!vazia(PILHA)){
       node *proxNode,
       *atual;
        atual = PILHA->prox;
        while(atual != NULL){
            proxNode = atual->prox;
            free(atual);
            atual = proxNode;
        }
    }
}
//escreve o elemento lido dentro do buffer
void push(node *PILHA, int elem){
    node *novo=aloca(elem);
    novo->prox = NULL;
    if(vazia(PILHA))
      PILHA->prox=novo;
    else{
      node *tmp = PILHA->prox;
      while(tmp->prox != NULL)
        tmp = tmp->prox;
    tmp->prox = novo; 
	}
    tam++;
}
//retira o elemento a partir do topo do buffer
node *pop(node *PILHA){
    if(PILHA->prox == NULL){
       exit(0);
    }else{
        node *ultimo = PILHA->prox,
        *penultimo = PILHA;
        while(ultimo->prox != NULL){
            penultimo = ultimo;
            ultimo = ultimo->prox;
       }
    penultimo->prox = NULL;
    tam--;
    return ultimo;
    }
}
int lookahead(node *PILHA){
    if(PILHA->prox == NULL){
       exit(0);
    }else{
        node *ultimo = PILHA->prox,
        *penultimo = PILHA;
        while(ultimo->prox != NULL){
            penultimo = ultimo;
            ultimo = ultimo->prox;
        }
        return ultimo ->num;
    }
}

void match(node *PILHA, int token){
	if(lookahead(PILHA) == token){	
		pop(PILHA);
		}else{
			printf("ERRO SINTATICO\n");
			exit(1);
		}	
}
/* REGRAS DO ANALISADOR SINTATICO
<programa>::= program <identificador>; <bloco>.
<bloco> ::= [<parte de declarações de variáveis>] [<parte de declarações de sub-rotinas>] <comando composto>
<parte de declarações de variáveis> ::= var<declaração de variáveis> {; <declaração de variáveis>};
<declaração de variáveis>::= <lista de identificadores>: <tipo>
<lista de identificadores> ::= <identificador> {, <identificador>}
<parte de declarações de subrotinas> ::= {declaração de procedimento>;}
<declaração de procedimento> ::= procedure <identificador>[<parâmetros formais>] ; <bloco> ;
<parâmetros formais> ::= ( <seção de parâmetros formais> { ; <seção de parâmetros formais>} )
<seção de parâmetros formais> ::= [var] <lista de identificadores>: <tipo>
<tipo> ::= integer | boolean
<comando composto ::= begin<comando> { ; <comando>} end
<comando> ::= <atribuição> | <chamada de procedimento> | <comando composto> | <comando condicional 1> | <comando repetitivo 1> | write( <identiicador> )
<atribuição>::= <variável>:= <expressão>
<chamada de procedimento> ::= <identificador> [ ( <lista de parâmetros>) ]
<lista de parâmetros> ::= [ ( <identificador> | <numero> | <bool> ) {, ( <identificador> | <numero> | <bool> ) } ]
<comando condicional 1> ::= if (<expressão>) then <comando> [else <comando>]
<comando repetitivo 1> ::= while (<expressão>) do <comando>
<expressão> ::= <expressão simples> [<relação><expressão simples>]
<relação> ::= = | <>| <| <= | >= | >
<expressão simples> ::= [+ | -] <termo> {(+ | -) <termo>}
<termo> ::= <fator> {(* | div) <fator> }
<fator> ::= <variavel> | <número> | <bool> | ( <expressãosimles> )
<variável> ::= <identificador>
<bool> ::= true | false
<número> ::= <dígito> {<dígito>}
<dígito> ::= 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
<identificador> ::= <letra> {<letra> | <dígito>}
<letra> ::= _ | a | b | ... | z| A | B | ... | Z

/* GRAMATICA
DIGITO -> 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
LETRA -> _ | a | b | ... | z| A | B | ... | Z
*/
void TIPO(node *BUFFER); 
void ID(node *BUFFER); 
void NUMERO(node *BUFFER);
void BOOL(node *BUFFER);
void VARIAVEL(node *BUFFER);
void FATOR(node *BUFFER); 
void TERMO(node *BUFFER);
void ExprSimples(node *BUFFER);
void ATRIB(node *BUFFER);
void COMDCOND1(node *BUFFER);
void COMDCOND2(node *BUFFER);
void CMDREP1(node *BUFFER);
void CMD(node *BUFFER);
void CPROC(node *BUFFER);
void RELACAO(node *BUFFER);
void Expr(node *BUFFER);
void ListaID(node *BUFFER);
void SecParamForm(node *BUFFER);
void DeclVar(node *BUFFER);
void PartDeclVar(node *BUFFER);
void PartDeclSubRotina(node *BUFFER);
void CmdComposto(node *BUFFER);
void BLOCO(node *BUFFER);
void ParamForm(node *BUFFER);
void DeclProcedure(node *BUFFER);
void LPARAM(node * BUFFER);
void PROGRAM(node *BUFFER);

//TIPO -> integer | boolean
void TIPO(node *BUFFER){
	node *token; 
	switch(lookahead(BUFFER)){
		case _INTEGER: 
	    	match(BUFFER, _INTEGER);
			printf("Lexema: <integer>\n");
			break;	
		case _BOOLEAN: 
	    	match(BUFFER, _BOOLEAN);
			printf("Lexema: <boolean>\n");
			break;		
		default: 
		    printf("esperado TIPO\n");
			exit(1);
	}
}

//ID -> LETRA {LETRA | DIGITO} 
void ID(node *BUFFER){
	node *token; 
	switch(lookahead(BUFFER)){
		case _LETTER: 
			match(BUFFER, _LETTER);
			printf("Lexema: <id>\n");
			break;		
		default: 
		    printf("esperado ID\n");
	}
}

//NUMERO -> DIGITO {DIGITO} 
void NUMERO(node *BUFFER){
	node *token; 
	switch(lookahead(BUFFER)){
		case _NUMBER: 
		    match(BUFFER, _NUMBER);
			printf("Lexema: <digitos>\n");
			break;		
		default: 
		    printf("esperava Digito\n");
			break;	
	}
}

//BOOL -> true | false
void BOOL(node *BUFFER){
	node *token; 
	switch(lookahead(BUFFER)){
		case _TRUE: 
		    match(BUFFER, _TRUE);
			printf("Lexema: <true>\n");
			break;	
		case _FALSE: 
		    match(BUFFER, _FALSE);
			printf("Lexema: <false>\n");
			break;		
		default: 
		    printf("esperado BOOL\n");
			break;	
	}
}

//VARIAVEL -> ID
void VARIAVEL(node *BUFFER){
	ID(BUFFER);
}

//FATOR -> VARIAVEL | NUMERO | BOOL | ( ExprSimples )
void FATOR(node *BUFFER){
	node *token;
	switch(lookahead(BUFFER)){
		case _LETTER: 
			 VARIAVEL(BUFFER);
			break;
		case _NUMBER: 
			 NUMERO(BUFFER);
			break;
		case _FALSE: 
			 BOOL(BUFFER);
			break;	
		case _TRUE: 
			 BOOL(BUFFER);
			break;	
		case _ABREP: 
		     match(BUFFER, _ABREP);
		     printf("Lexema: (\n");
			 ExprSimples(BUFFER);
			 if(lookahead(BUFFER) == _FECHAP){
			 	match(BUFFER, _FECHAP);
				printf("Lexema: )\n");		
	       	}else{ 
			    printf("esperava )\n");
				exit(1);	
         	}
			break;			
		default: 
		    printf("ERRO SINTATICO, esperava FATOR\n");
			break;	
	}
}

//TERMO -> FATOR {(* | div) FATOR} 
void TERMO(node *BUFFER){
	node *token; 
	while((lookahead(BUFFER)==_FALSE)||(lookahead(BUFFER)==_TRUE)||(lookahead(BUFFER) == _LETTER)||(lookahead(BUFFER) == _NUMBER)||(lookahead(BUFFER) == _OPMULT)||(lookahead(BUFFER) == _DIV)){
		switch(lookahead(BUFFER)){
			case _OPMULT: 
			    match(BUFFER, _OPMULT);
				printf("Lexema: *\n");
				FATOR(BUFFER);
				break;	
			case _DIV: 
			    match(BUFFER, _DIV);
				printf("Lexema: div\n");
				FATOR(BUFFER);
				break;	
			case _NUMBER: 
				FATOR(BUFFER);
				break;
			case _LETTER: 
				FATOR(BUFFER);
				break;	
			case _TRUE: 
				FATOR(BUFFER);
				break;
			case _FALSE: 
				FATOR(BUFFER);
				break;				
			default: 
			    printf("esperava * ou div\n");
				break;	
		}
	}
}
//ExprSimples -> [+ | -] TERMO {(+ | -) TERMO} 
void ExprSimples(node *BUFFER){
	node *token; 
	while((lookahead(BUFFER)==_FALSE)||(lookahead(BUFFER)==_TRUE)||(lookahead(BUFFER) == _LETTER)||(lookahead(BUFFER) == _NUMBER)||(lookahead(BUFFER) == _OPADI)||(lookahead(BUFFER) == _OPSUB)){
		switch(lookahead(BUFFER)){
			case _OPADI: 
			    match(BUFFER, _OPADI);
				printf("Lexema: +\n");
				TERMO(BUFFER);
				break;	
			case _OPSUB: 
		    	match(BUFFER, _OPSUB);
				printf("Lexema: -\n");
				TERMO(BUFFER);
				break;	
			case _NUMBER: 
				TERMO(BUFFER);
				break;
			case _LETTER: 
				TERMO(BUFFER);
				break;	
			case _TRUE:
			    TERMO(BUFFER);
				break;
			case _FALSE:
			    TERMO(BUFFER);
				break;			
			default: 
			    printf("esperava + ou -");
				break;	
		}
	}
}

//RELACAO -> = | <>| <| <= | >= | >
void RELACAO(node *BUFFER){
	node *token; 
	if((lookahead(BUFFER) == _IGUAL)||(lookahead(BUFFER) == _MAIOR)||(lookahead(BUFFER) == _MENOR)||(lookahead(BUFFER) == _MAIORIGUAL)||(lookahead(BUFFER) == _ATRIBUICAO)||(lookahead(BUFFER) == _DIFERENTE)){
	printf("Lexema: relop\n");	
	pop(BUFFER);
	} 	
}

//Expr -> ExprSimples [RELACAO ExprSimples]
void Expr(node *BUFFER){
	ExprSimples(BUFFER);
	while((lookahead(BUFFER) == _IGUAL)||(lookahead(BUFFER) == _MAIOR)||(lookahead(BUFFER) == _MENOR)||(lookahead(BUFFER) == _MAIORIGUAL)||(lookahead(BUFFER) == _ATRIBUICAO)||(lookahead(BUFFER) == _DIFERENTE)){
	    RELACAO(BUFFER);
    	ExprSimples(BUFFER);
    }
}

//ListaID -> ID {, ID} 
void ListaID(node *BUFFER){
	ID(BUFFER);	
	node *token; 
    if (lookahead(BUFFER) == _VRGL) {
    	while(lookahead(BUFFER) == _VRGL) {
			printf("Lexema: ,\n");
			pop(BUFFER);
			ID(BUFFER);
		}
    }
}
//SecParamForm -> [var] ListaID : TIPO
void SecParamForm(node *BUFFER){
    node *token; 
	switch(lookahead(BUFFER)){
		case _VAR:
			printf("Lexema: var\n"); 
			pop(BUFFER);
			ListaID(BUFFER);
	        if(lookahead(BUFFER) == _DSPNT){
				printf("Lexema: :\n");
				pop(BUFFER);
				TIPO(BUFFER);		
	       	}else{ 
			    printf("ERRO SINTATICO, esperava :\n");
				exit(1);	
         	}
			break;	
		default: 
		    printf("ERRO SINTATICO, esperava VAR\n");
			break;	
	}
} 

//DeclVar -> ListaID : TIPO
void DeclVar(node *BUFFER){
	node *token; 
	ListaID(BUFFER); 
	if(lookahead(BUFFER) == _DSPNT){
			printf("Lexema: :\n");
			pop(BUFFER);
			TIPO(BUFFER);		
	}else{ 
		    printf("ERRO SINTATICO, esperava :\n");
			exit(1);	
	}
}

//PartDeclVar -> var DeclVar {; DeclVar} ; 
void PartDeclVar(node *BUFFER){
	node *token; 
	if(lookahead(BUFFER) == _VAR){
		while(lookahead(BUFFER) == _VAR){
			pop(BUFFER);
			printf("Lexema: var\n");
			DeclVar(BUFFER);
			if(lookahead(BUFFER) == _PNTVRGL){
				printf("Lexema: ;\n");
				pop(BUFFER);	
		    }else{ 
			    printf("ERRO SINTATICO, esperava ;\n");
				exit(1);	
	     	}
	    }
    }	
} 

//PartDeclSubRotina -> {DeclProcedure;}
void PartDeclSubRotina(node *BUFFER){
	node *token;
	if(lookahead(BUFFER) == _PROCEDURE){
		DeclProcedure(BUFFER);
		if(lookahead(BUFFER) ==_PNTVRGL){
			printf("Lexema: ;\n");
	    }
    }	
}

//CmdComposto -> begin CMD {; CMD} end
void CmdComposto(node *BUFFER){
	node *token;	
	if (lookahead(BUFFER) == _BEGIN) {
		printf("Lexema: begin\n");
		pop(BUFFER);
		CMD(BUFFER);    
		while((lookahead(BUFFER) == _WRITE)||(lookahead(BUFFER) == _LETTER)||(lookahead(BUFFER) == _BEGIN)||(lookahead(BUFFER) == _IF)||(lookahead(BUFFER) == _IF)||(lookahead(BUFFER) == _PNTVRGL)){
			  if(lookahead(BUFFER) == _PNTVRGL){
			    printf("Lexema: ;\n");
			    pop(BUFFER);
		        }
				CMD(BUFFER);
	    }
        if (lookahead(BUFFER) == _END) {
		     printf("Lexema: end\n");
		     pop(BUFFER);
	    }
	} else {
		printf("ERRO SINTATICO, esperava BEGIN\n");
	    exit(1);
	}
}

//BLOCO -> [PartDeclVar] [PartDeclSubRotina] CmdComposto
void BLOCO(node *BUFFER){
	while(lookahead(BUFFER) == _VAR){
	    PartDeclVar(BUFFER); 
    }
    while(lookahead(BUFFER) == _PROCEDURE){
	    PartDeclSubRotina(BUFFER);	 
    }
	 CmdComposto(BUFFER);
}

//ParamForm -> ( SPARAMFORM {; SPARAMFORM })
void ParamForm(node *BUFFER){
	node *token; 
	switch(lookahead(BUFFER)){
		case _ABREP: 
			printf("Lexema: (\n");
			pop(BUFFER);
			SecParamForm(BUFFER);
			while(lookahead(BUFFER) == _PNTVRGL){
				printf("Lexema: ;\n");
			    pop(BUFFER);
				SecParamForm(BUFFER);
			}
			if(lookahead(BUFFER) == _FECHAP){
		       printf("Lexema: )\n");
		       pop(BUFFER);
	     	} else {
	     		printf("ERRO SINTATICO, esperava )\n");
	     		exit(1);
			 }
	     	break;
		default: 
		    printf("ERRO SINTATICO, esperava (\n");
			break;	
	}

}

//DeclProcedure -> procedure ID [PARAMFORM] ; BLOCO ;
void DeclProcedure(node *BUFFER){
	node *token; 
	switch(lookahead(BUFFER)){
		case _PROCEDURE: 
		    pop(BUFFER);
			printf("Lexema: <procedure>\n");
			ID(BUFFER);
			while(lookahead(BUFFER) == _ABREP){
			   ParamForm(BUFFER);
	     	}
			if(lookahead(BUFFER) == _PNTVRGL){
				printf("Lexema: ;\n");
				pop(BUFFER);	
		    }
			BLOCO(BUFFER);
			if(lookahead(BUFFER) == _PNTVRGL){
				printf("Lexema: ;\n");
				pop(BUFFER);
		    }else{ 
			    printf("ERRO SINTATICO, esperava ;\n");
				exit(1);	
	     	}
			break;		
		default: 
		    printf("ERRO SINTATICO DeclProcedure\n");
			break;	
	}	
}

//CMD -> ATRIB | CPROC | CmdComposto | COMDCOND1 | CMDREP1 | write ( ID )
void CMD(node *BUFFER){
	node *token; int lex;
	switch(lookahead(BUFFER)){
		case _WRITE:
			printf("Lexema: write\n");
			pop(BUFFER);
        	if(lookahead(BUFFER) == _ABREP){
				printf("Lexema: (\n");
				pop(BUFFER);
				ID(BUFFER);
			}else{
				printf("ERRO SINTATICO, esperava (\n");
				exit(1);
			}
        	if(lookahead(BUFFER) == _FECHAP){
        		pop(BUFFER);
				printf("Lexema: )\n");
			}else{
				printf("ERRO SINTATICO, esperava )\n");
				exit(1);
			}
		    break;	
		case _LETTER:
			if(lookahead(BUFFER) == _ABREP){
				printf("Lexema: (\n");
				CPROC(BUFFER);
			}else{
				ATRIB(BUFFER);
			}		
		    break;
		case _BEGIN:
			CmdComposto(BUFFER);	
		    break;
		case _IF:
			COMDCOND1(BUFFER);	
		    break;
		case _WHILE:
			CMDREP1(BUFFER);	
		    break;							
	}	
}

//ATRIB -> VARIAVEL := EXPR 
void ATRIB(node *BUFFER){
	node *token;
	VARIAVEL(BUFFER);
	if(lookahead(BUFFER) == _ATRIBUICAO){
		printf("Lexema: :=\n");
		pop(BUFFER);
		Expr(BUFFER);
		if(lookahead(BUFFER) == _PNTVRGL){
				printf("Lexema: ;\n");
				pop(BUFFER);	
		}
	}else{
		printf("ERRO SINTATICO, esperava :=\n");
		exit(1);
	}
}

//CPROC -> ID [( LPARAM )]
void CPROC(node *BUFFER){
	node *token;
	ID(BUFFER);
    while(lookahead(BUFFER) == _ABREP){
		printf("Lexema: (\n");
		pop(BUFFER);
	    LPARAM(BUFFER);
		if(lookahead(BUFFER) == _FECHAP){
			printf("Lexema: )\n");
			pop(BUFFER);
		}else{
			printf("ERRO SINTATICO, esperava )\n");
			exit(1);
		}
    }
}
//LPARAM -> [( ID | NUMERO | BOOL ) {, ( ID | NUMERO | BOOL )}]
void LPARAM(node * BUFFER) {
    node * token;
    do{
	    pop(BUFFER);
	    if(lookahead(BUFFER) == _ABREP) {
	        printf("Lexema: (\n");
	        pop(BUFFER);
	        switch(lookahead(BUFFER)){
			      case _LETTER:
			        ID(BUFFER);
			        break;
			      case _NUMBER:
			        NUMERO(BUFFER);
			        break;
			      case _FALSE:
			        BOOL(BUFFER);
			        break;
			      case _TRUE:
			        BOOL(BUFFER);
			        break;
			      default:
			        printf("ERRO SINTATICO, esperava ID ou NUMERO ou BOOL\n");
			        break;
	        }
		    if(lookahead(BUFFER) == _FECHAP){
		       printf("Lexema: )\n");
		       pop(BUFFER);
		    }else{
			    printf("ERRO SINTATICO, esperava )\n");
			    exit(1);
		    }
	    }
    }while(lookahead(BUFFER) == _VRGL);
}

//COMDCOND1 -> if ( Expr ) then CMD {COMDCOND2}
void COMDCOND1(node *BUFFER){
	node *token;
	if(lookahead(BUFFER) == _IF){
		printf("Lexema: if\n");
		pop(BUFFER);
		if(lookahead(BUFFER) == _ABREP){
	    	printf("Lexema: (\n");
	    	pop(BUFFER);
		    Expr(BUFFER);   
		    if(lookahead(BUFFER) == _FECHAP){
		    	printf("Lexema: )\n");
		    	pop(BUFFER);
		    }else{
		    	printf("ERRO SINTATICO, esperava esperava ) \n");
			    exit(1);
        	}
	    }
		if(lookahead(BUFFER) == _THEN){
	    	printf("Lexema: then\n");
	    	pop(BUFFER);
		    CMD(BUFFER);
	    }else{
		    printf("ERRO SINTATICO, esperava esperava then \n");
			exit(1);
        }
	    if(lookahead(BUFFER) == _ELSE){
	    	COMDCOND2(BUFFER);
		}
	}else{
			printf("ERRO SINTATICO, esperava esperava if \n");
			exit(1);
	}	
}

//COMDCOND2 -> else CMD ----->>>> correção da gramatica
void COMDCOND2(node *BUFFER){
	node *token;
	if(lookahead(BUFFER) == _ELSE){
		printf("Lexema: else\n");
		pop(BUFFER);
		CMD(BUFFER);
	}	
}
//CMDREP1 -> while ( EXPR ) do CMD
void CMDREP1(node *BUFFER){
	node *token;
	if(lookahead(BUFFER) == _WHILE){
		printf("Lexema: while\n");
		pop(BUFFER);
		if(lookahead(BUFFER) == _ABREP){
	    	printf("Lexema: (\n");
	    	pop(BUFFER);
		    Expr(BUFFER);   
		    if(lookahead(BUFFER) == _FECHAP){
		    	printf("Lexema: )\n");
		    	pop(BUFFER);
		    }else{
		    	printf("ERRO SINTATICO, esperava esperava ) \n");
			    exit(1);
        	}
	    }
		if(lookahead(BUFFER) == _DO){
	    	printf("Lexema: do\n");
	    	pop(BUFFER);
		    CMD(BUFFER);
	    }else{
		    printf("ERRO SINTATICO, esperava esperava do \n");
			exit(1);
        }
	}else{
			printf("ERRO SINTATICO, esperava esperava while \n");
			exit(1);
	}	
}


//PROGRAM  -> ID ; BLOCO .
void PROGRAM(node *BUFFER){	
	node *token; 
	pop(BUFFER);
	ID(BUFFER);	
	switch(lookahead(BUFFER)){
		case _PNTVRGL:
		    pop(BUFFER);
			printf("Lexema: ;\n");
			BLOCO(BUFFER);
			if (lookahead(BUFFER) == _PNT) {
				printf("Lexema: .\n");
				pop(BUFFER);
			}
			break;
		default: 
		    printf("ERRO SINTATICO, esperava ;\n");
			break;	
	}
}


void analisador_sintatico(node *PILHA, int stop){
    node *token; 
	int lex;
	node *BUFFER=(node *)malloc(sizeof(node));
	//criando o buffer do codigo lido
	if(!BUFFER){
	  printf("Sem memoria disponivel!\n");
	  exit(1);
	 }else{
	    inicia(BUFFER);
	//invertendo a pilha para usar o buffer		 
	while(stop != 0){
		token = pop(PILHA);
	    lex = token->num;
		push(BUFFER,token->num);  
		stop--;
    }exibe(BUFFER);
	while(stop != -1){
		switch(lookahead(BUFFER)){
			case _PROGRAM:
				printf("Lexema: <program>\n");
				PROGRAM(BUFFER);
				stop = 1;
				printf("Analise sintatica finalizada.\n");
				break;	
			case -1: /*<fim da leitura do  buffer>*/
				stop = 1;
				break;	
			default: 
			    printf("ERRO SINTATICO, esperava PROGRAM\n");
			    stop = -1;
				break;	
		}
	}
	printf("Analise sintatica finalizada.\n");
    } 
}
int main(){
	char str[9999], linha[9999], final[9999] = "", url[]="", ch;
	int i = -1, r=1, tamanho = 0, count=0, quantidade = 0;
	FILE *arq;
	FILE *saida;
	node *PILHA=(node *)malloc(sizeof(node));
	if(!PILHA){
	  printf("Sem memoria disponivel!\n");
	  exit(1);
	 }else{
	 inicia(PILHA);
	//Definindo o arquivo a ser compilado como program.txt	
	arq = fopen("program.txt", "r");
	//Arquivo de saida.txt exibe a lista de tokens lidos pelo automato do método leitor
	//a saída é exibida no formato <token,posição>
	saida = fopen("saida.txt", "w");	
	//Condição que valida a leitura do arquivo program.txt caso não seja possível a leitura
	//a mensagem de erro será exibido	
	if(arq == NULL)
		printf("Erro, nao foi possivel abrir o arquivo\n");
	else{
		//O loop garante a leitura linha a linha do arquivo program.txt
		while((fgets(linha, 500, arq)!= NULL)&&(r!=0)){	
		    //conta a quantidade de caracteres na linha que foi lida
			tamanho = strlen(linha);
			count=0;
			//identifica cada caracter das palavras lidas
			while(count<tamanho){
				ch=linha[count];
				//condição de parada para identificar o final de um token
			   	if(ch == ' ' || ch == '\n') {
			    	strcat(final, &ch);
			    	r = leitor(final, &i);
			    	if((r!=1)&&(r!=-1)){
			    	    push(PILHA,r);
				    	if (r!=0){
				    		fprintf(saida, "<%d,%d>\n", r, quantidade);
				    	    quantidade++;
				    	}else{
				    		if(r==0){
				    		       printf("Erro: Entrada nao aceita");
						           printf("\nSequencia incorreta: %s\n", final);
						    }      break;
						}           
					}else{
						if(r==-1)
						    break;
					    }
			    	i = -1;
			    	strcpy(final, "");
			    	} else {
			    		strcat(final, &ch);
			    	}
			    count++; 	
			    }
		   }  
	//	exibe(PILHA);    
		fclose(saida);
		fclose(arq);
		analisador_sintatico(PILHA, quantidade);
		}
	free(PILHA);
    return 0;
    }
}

