/*
 * FUN_004eec90 (159 B) — __thiscall (RET 0x4). MLR/Adept state-engine
 * loader: reads a stream via virtual [vtable+0x20], loops while an FPU
 * value compares against 0x76d598, then chains to FUN_004f0e50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d598;
extern void __cdecl FUN_004f0e50(void);

__declspec(naked) void FUN_004eec90(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        mov     esi, dword ptr [esp+0x10]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x4
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        fld     dword ptr [esp+0x8]
        fcomp   dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_004eece7
L_004eecc8:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        fld     dword ptr [esp+0x8]
        fcomp   dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jz      L_004eecc8
L_004eece7:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        push    esi
        mov     ecx, edi
        call    FUN_004f0e50
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        pop     edi
        pop     esi
        add     esp, 0x8
        ret     0x4
    }
}
