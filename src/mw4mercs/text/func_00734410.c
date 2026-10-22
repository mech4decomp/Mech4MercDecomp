/*
 * FUN_00734410 (extent 0x734410-0x7344d4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_008aa288;
extern char   g_008aa289;
extern void __cdecl FUN_007344e0(void);
extern void __cdecl FUN_0075b4a0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00734410(void)
{
    __asm {
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        push    edi
        je    L_446d
        mov    al, byte ptr [g_008aa288]
        test    al, al
        jne    L_446d
        mov    edi, dword ptr [esi + 0xac]
        cmp    edi, 3
        je    L_446d
        cmp    dword ptr [esi + 0xa8], 4
        je    L_4441
        mov    al, byte ptr [g_008aa289]
        test    al, al
        je    L_446d
L_4441:
        mov    eax, dword ptr [esi + 0x18]
        test    eax, eax
        je    L_4456
        push    0
        push    0
        push    0
        push    0
        push    eax
        call    FUN_0075b4a0
L_4456:
        mov    eax, dword ptr [esi + 0xe0]
        push    0
        push    eax
        push    8
        push    esi
        mov    dword ptr [esi + 0xa8], edi
        call    FUN_007344e0
L_446d:
        pop    edi
        pop    esi
        ret    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_44d0
        fild    dword ptr [esi + 0xb8]
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0xd8]
        mov    dword ptr [esi + 0xd0], edi
        mov    dword ptr [esi + 0xd4], ebx
        mov    dword ptr [esi + 0xc0], edi
        mov    dword ptr [esi + 0xc4], ebx
        call    FUN_0075db4a
        fild    dword ptr [esi + 0xbc]
        add    eax, edi
        mov    dword ptr [esi + 0xc8], eax
        fmul    dword ptr [esi + 0xdc]
        call    FUN_0075db4a
        add    eax, ebx
        pop    edi
        mov    dword ptr [esi + 0xcc], eax
        pop    ebx
L_44d0:
        pop    esi
        ret    8
    }
}
