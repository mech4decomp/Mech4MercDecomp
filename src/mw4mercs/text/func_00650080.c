// FUN_00650080 - ABL symbol table lookup with '.' handling (0x650080, 157 B)

extern unsigned int g_80da24;   // 0x0080da24
extern unsigned int g_8058c0;   // 0x008058c0
extern void *g_76b308;          // 0x0076b308 (IAT strchr)
extern void *__cdecl FUN_0064ff50(const char *, unsigned int);
extern void *__cdecl FUN_0064ff00(unsigned int);
extern void *__cdecl FUN_00650060(const char *);

__declspec(naked) unsigned int func_00650080(void)
{
    __asm {
        PUSH EBX
        MOV EBX, dword ptr [ESP + 0x8]
        PUSH ESI
        PUSH EDI
        PUSH 0x2e
        PUSH EBX
        CALL dword ptr [g_76b308]
        MOV ESI, EAX
        ADD ESP, 0x8
        TEST ESI, ESI
        JZ loc_6500d6
        MOV EAX, dword ptr [g_80da24]
        PUSH EAX
        PUSH EBX
        MOV byte ptr [ESI], 0x0
        CALL FUN_0064ff50
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ loc_6500b3
        POP EDI
        POP ESI
        POP EBX
        RET
loc_6500b3:
        MOV ECX, dword ptr [EAX + 0x30]
        PUSH ECX
        INC ESI
        PUSH ESI
        CALL FUN_0064ff50
        MOV ESI, EAX
        ADD ESP, 0x8
        TEST ESI, ESI
        JZ loc_650117
        PUSH ESI
        CALL FUN_0064ff00
        ADD ESP, 0x4
        POP EDI
        MOV EAX, ESI
        POP ESI
        POP EBX
        RET
loc_6500d6:
        MOV ESI, dword ptr [g_8058c0]
        TEST ESI, ESI
        JL loc_6500ff
        LEA EDI, [ESI*0x4 + g_80da24]
loc_6500e7:
        MOV EDX, dword ptr [EDI]
        PUSH EDX
        PUSH EBX
        CALL FUN_0064ff50
        ADD ESP, 0x8
        TEST EAX, EAX
        JNZ loc_650119
        DEC ESI
        SUB EDI, 0x4
        TEST ESI, ESI
        JGE loc_6500e7
loc_6500ff:
        PUSH EBX
        CALL FUN_00650060
        MOV ESI, EAX
        ADD ESP, 0x4
        TEST ESI, ESI
        JZ loc_650117
        PUSH ESI
        CALL FUN_0064ff00
        ADD ESP, 0x4
loc_650117:
        MOV EAX, ESI
loc_650119:
        POP EDI
        POP ESI
        POP EBX
        RET
    }
}
