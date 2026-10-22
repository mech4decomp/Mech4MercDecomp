/*
 * FUN_006ACD00 (208 B) — __cdecl (RET). Reads a node at param_1+0x3dc,
 * conditionally calls FUN_0041ed40 / FUN_0041eb40, then updates counters
 * in a table indexed by param_1 (SIB [ecx+edx*4+0x848c]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;   /* 0x007dab44 */
extern int g_7dab40;   /* 0x007dab40 */

extern void* __cdecl FUN_0067f7b0(int, int, int);
extern void  __cdecl FUN_0041ed40(void);
extern void  __cdecl FUN_0041eb40(void);

__declspec(naked) void FUN_006acd00(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [eax + 0x3dc]
        test    edi, edi
        mov     dword ptr [esp + 0x8], 0x0
        jz      l_55
        mov     esi, dword ptr [edi + 0x17c]
        test    esi, esi
        jz      l_55
        cmp     esi, -0x1
        jz      l_55
        push    0x1
        push    0x0
        push    0xd
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        inc     esi
        push    esi
        push    0x0
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        call    FUN_0041ed40
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [edi + 0x17c], edx
        jmp     l_7a
    l_55:
        push    0x1
        push    0x0
        push    0xd
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esp + 0x20]
        add     esp, 0xc
        push    eax
        lea     eax, [esp + 0x14]
        push    eax
        mov     dword ptr [esp + 0x18], 0x0
        call    FUN_0041eb40
    l_7a:
        mov     ecx, dword ptr [g_7dab44]
        mov     esi, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx]
        xor     edx, esi
        mov     esi, dword ptr [edx + 0x14]
        push    0x1
        push    0x0
        push    0xd
        xor     esi, 0x85739531
        call    FUN_0067f7b0
        mov     ecx, dword ptr [esi + 0x1814]
        mov     edx, dword ptr [esp + 0x30]
        mov     esi, dword ptr [ecx + edx*4 + 0x848c]
        add     ecx, 0x8484
        add     esi, eax
        mov     dword ptr [ecx + edx*4 + 0x8], esi
        mov     edx, dword ptr [ecx + 0xc00]
        add     esp, 0xc
        add     edx, eax
        pop     edi
        mov     dword ptr [ecx + 0xc00], edx
        pop     esi
        pop     ecx
        ret
    }
}
