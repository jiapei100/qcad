


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
        #ifndef RECMASHELLFILEIMPORTERADAPTER_H
        #define RECMASHELLFILEIMPORTERADAPTER_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RFileImporterAdapter.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaShellFileImporterAdapter : public RFileImporterAdapter {

        public:
      
    // Destructor:
    
            ~REcmaShellFileImporterAdapter();
        static RFileImporterAdapter* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellFileImporterAdapter* getSelfShell(const QString& fName, QScriptContext* context)
    ;
    
    
    // Constructors:
    
      REcmaShellFileImporterAdapter(
                
            );
        
      REcmaShellFileImporterAdapter(
                RDocument & document, RMessageHandler * messageHandler
        =  NULL, RProgressHandler * progressHandler
        =  NULL
            );
        
    
    
      bool importFile(
                const QString & fileName, const QString & nameFilter
            );
        
    
  
        // methods of 1st level base class RFileImporter:
        
            // methods of 2nd level base class RImporter:
            
      void startImport(
                
            );
        
    
      void endImport(
                
            );
        
    
      void importObject(
                RObject * object
            );
        
    
      void setCurrentBlockId(
                RBlock::Id id
            );
        
    
      RBlock::Id getCurrentBlockId(
                
            );
        
    
      RDocument & getDocument(
                
            );
        
    
      void setDocument(
                RDocument * d
            );
        
    

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	QScriptValue __qtscript_self;
            };
            Q_DECLARE_METATYPE(REcmaShellFileImporterAdapter*)
        
	#endif
    