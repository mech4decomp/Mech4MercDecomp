/*
 * FUN_004ec390 (103 B) — __thiscall (ECX=this). MLR/Adept audio state
 * engine teardown/reinit: if this+0x14 set, either virtual-call
 * (*(this+0x14)->vtable[0])(1) or FUN_004154d0(g_007dc868+0x78) with
 * this+0x14+0x2c=0, then this+0x14=0; sets this+0x24=4, calls
 * FUN_004ec8c0(this) and FUN_004f23c0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc868;
extern void __stdcall FUN_004154d0(int);
extern void __stdcall FUN_004ec8c0(int);
extern void __stdcall FUN_004f23c0(int);

__declspec(naked) void FUN_004ec390(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi+0x14]
        test    ecx, ecx
        jz      L_ca
        mov     eax, dword ptr [esi+0x24]
        test    eax, eax
        jnz     L_ad
        test    ecx, ecx
        jz      L_c3
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        jmp     L_c3
    L_ad:
        mov     edx, dword ptr [g_007dc868]
        add     edx, 0x78
        push    edx
        mov     dword ptr [ecx+0x2c], 0
        call    FUN_004154d0
    L_c3:
        mov     dword ptr [esi+0x14], 0
    L_ca:
        mov     ecx, dword ptr [esi+0x10]
        push    esi
        mov     dword ptr [esi+0x24], 4
        call    FUN_004ec8c0
        mov     edx, dword ptr [g_007dc868]
        push    esi
        mov     esi, dword ptr [esi+0x1c]
        lea     eax, [esi+esi*4]
        lea     ecx, [esi+eax*2]
        mov     eax, dword ptr [edx+0x48]
        lea     ecx, [eax+ecx*4]
        call    FUN_004f23c0
        pop     esi
        ret
    }
}
