/*
 * FUN_00724a00 (extent 0x724a00-0x724c00) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_0076b320;
extern int    g_00856b94;
extern char   g_00857f30;
extern char   g_008aadbc;
extern void __cdecl FUN_00725080(void);
extern void __cdecl FUN_00755940(void);
extern void __cdecl FUN_00755980(void);
extern void __cdecl FUN_00755e40(void);

__declspec(naked) void FUN_00724a00(void)
{
    __asm {
        mov    eax, dword ptr [g_00856b94]
        test    eax, eax
        push    esi
        push    edi
        je    L_4bf8
        mov    al, byte ptr [g_008aadbc]
        test    al, al
        jne    L_4bf8
        mov    esi, dword ptr [esp + 0x10]
        test    esi, esi
        jne    L_4a41
        mov    esi, dword ptr [esp + 0xc]
        push    4
        push    esi
        call    FUN_00725080
        mov    ecx, dword ptr [esi*4 + 0x856a8c]
        call    FUN_00755940
        pop    edi
        pop    esi
        ret    8
L_4a41:
        mov    ecx, dword ptr [esi]
        cmp    ecx, 6
        ja    L_4bf8
        jmp    dword ptr [ecx*4 + 0x724c00]
        mov    al, byte ptr [g_00857f30]
        test    al, al
        mov    edi, dword ptr [esp + 0xc]
        jne    L_4b1a
        mov    edx, dword ptr [esi + 4]
        test    edx, edx
        je    L_4b1a
        mov    eax, dword ptr [edi*4 + 0x856a8c]
        cmp    ecx, dword ptr [eax + 0x9c]
        jne    L_4b1a
        add    eax, 0xa0
        push    eax
        push    edx
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        jne    L_4b1a
        mov    ecx, dword ptr [edi*4 + 0x856a8c]
        push    esi
        call    FUN_00755980
        pop    edi
        pop    esi
        ret    8
        mov    al, byte ptr [g_00857f30]
        test    al, al
        mov    edi, dword ptr [esp + 0xc]
        jne    L_4b1a
        mov    ecx, dword ptr [esi + 4]
        test    ecx, ecx
        je    L_4b1a
        mov    eax, dword ptr [edi*4 + 0x856a8c]
        cmp    dword ptr [eax + 0x9c], 4
        jmp    L_4af2
        mov    al, byte ptr [g_00857f30]
        test    al, al
        mov    edi, dword ptr [esp + 0xc]
        jne    L_4b1a
        mov    ecx, dword ptr [esi + 4]
        test    ecx, ecx
        je    L_4b1a
        mov    eax, dword ptr [edi*4 + 0x856a8c]
        cmp    dword ptr [eax + 0x9c], 6
L_4af2:
        jne    L_4b1a
        add    eax, 0xa0
        push    eax
        push    ecx
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        jne    L_4b1a
        mov    ecx, dword ptr [edi*4 + 0x856a8c]
        push    esi
        call    FUN_00755980
        pop    edi
        pop    esi
        ret    8
L_4b1a:
        push    4
        push    edi
        call    FUN_00725080
        mov    ecx, dword ptr [edi*4 + 0x856a8c]
        push    esi
        call    FUN_00755980
        pop    edi
        pop    esi
        ret    8
        mov    al, byte ptr [g_00857f30]
        test    al, al
        mov    edi, dword ptr [esp + 0xc]
        jne    L_4b70
        mov    ecx, dword ptr [esi + 4]
        test    ecx, ecx
        je    L_4b70
        mov    eax, dword ptr [edi*4 + 0x856a8c]
        cmp    dword ptr [eax + 0x9c], 5
        jne    L_4b70
        add    eax, 0xa0
        push    eax
        push    ecx
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        je    L_4bf8
L_4b70:
        mov    ecx, dword ptr [edi*4 + 0x856a8c]
        call    FUN_00755940
        mov    eax, dword ptr [edi*4 + 0x856a8c]
        mov    ecx, dword ptr [esi + 4]
        mov    dword ptr [eax + 0x70], esi
        push    0x7f
        mov    dword ptr [eax + 0x9c], 5
        push    ecx
        add    eax, 0xa0
        push    eax
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        pop    edi
        pop    esi
        ret    8
        mov    al, byte ptr [g_00857f30]
        test    al, al
        mov    edi, dword ptr [esp + 0xc]
        jne    L_4be3
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_4be3
        mov    ecx, dword ptr [edi*4 + 0x856a8c]
        cmp    dword ptr [ecx + 0x9c], 3
        jne    L_4be3
        add    ecx, 0xa0
        push    ecx
        push    eax
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        je    L_4bf8
L_4be3:
        push    4
        push    edi
        call    FUN_00725080
        mov    ecx, dword ptr [edi*4 + 0x856a8c]
        push    esi
        call    FUN_00755e40
L_4bf8:
        pop    edi
        pop    esi
        ret    8
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x00724C00 (8 relocated pointers)
        __emit 0x53
        __emit 0x4A
        __emit 0x72
        __emit 0x00
        __emit 0x53
        __emit 0x4A
        __emit 0x72
        __emit 0x00
        __emit 0xF8
        __emit 0x4B
        __emit 0x72
        __emit 0x00
        __emit 0xAA
        __emit 0x4B
        __emit 0x72
        __emit 0x00
        __emit 0xAC
        __emit 0x4A
        __emit 0x72
        __emit 0x00
        __emit 0x34
        __emit 0x4B
        __emit 0x72
        __emit 0x00
        __emit 0xD0
        __emit 0x4A
        __emit 0x72
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        // jump-table data @ 0x00724F34 (0 relocated pointers)
    }
}
