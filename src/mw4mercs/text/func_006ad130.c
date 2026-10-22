/*
 * FUN_006AD130 (190 B) — __cdecl (1 param) that queries a subsystem via
 * FUN_0041eb40, dispatches a virtual call, and increments a per-index
 * counter in a global table derived from 0x007dab44 ^ 0x007dab40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_ab44;   /* 0x007dab44 */
extern unsigned long g_ab40;   /* 0x007dab40 */

extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0050e200(void);

__declspec(naked) void FUN_006ad130(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        push    0x1
        lea     eax, [esp + 0x8]
        push    eax
        mov     dword ptr [esp + 0xc], 0x0
        call    FUN_0041eb40
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      l_197
        mov     ecx, dword ptr [esp + 0xc]
        mov     esi, dword ptr [ecx + 0x99c]
        test    esi, esi
        jz      l_b4
        mov     edx, dword ptr [esi + 0x10]
        and     edx, 0x7
        cmp     dl, 0x3
        jnz     l_189
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [eax + 0x38]
        push    ecx
        fstp    dword ptr [esp]
        call    FUN_0050e200
        fstp    dword ptr [esi + 0x1c0]
        add     esp, 0x4
    l_189:
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x6
        jmp     l_b1
    l_197:
        mov     eax, dword ptr [esp + 0xc]
        mov     eax, dword ptr [eax + 0x99c]
        test    eax, eax
        jz      l_b4
        mov     ecx, dword ptr [eax + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x7
    l_b1:
        call    dword ptr [edx + 0x4]
    l_b4:
        mov     eax, dword ptr [g_ab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_ab40]
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [esp + 0x20]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x1814]
        mov     edx, dword ptr [eax + ecx*4 + 0x848c]
        add     eax, 0x8484
        inc     edx
        mov     dword ptr [eax + ecx*4 + 0x8], edx
        inc     dword ptr [eax + 0xc00]
        pop     esi
        pop     ecx
        ret
    }
}
