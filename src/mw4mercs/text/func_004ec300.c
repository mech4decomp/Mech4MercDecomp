/*
 * FUN_004ec300 (75 B) — __thiscall (ECX=this). MLR/Adept audio state
 * engine: if this+0x14==0, calls FUN_00724350(this+0x18,2,0,0,0) and
 * zeroes this+0x34; else computes this+0x34 = table[this+0x1c*0x2c]
 * * *(float*)(this+0x14+0x14) and calls FUN_00724350(this+0x18,2,
 * this+0x34,0,0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc868;
extern void __stdcall FUN_00724350(int, int, int, int, int);

__declspec(naked) void FUN_004ec300(void)
{
    __asm {
        mov     edx, dword ptr [ecx+0x14]
        test    edx, edx
        jnz     L1
        mov     eax, dword ptr [ecx+0x18]
        push    edx
        push    edx
        push    edx
        push    2
        push    eax
        mov     dword ptr [ecx+0x34], edx
        call    FUN_00724350
        ret
    L1:
        mov     eax, dword ptr [ecx+0x1c]
        push    esi
        lea     esi, [eax+eax*4]
        lea     eax, [eax+esi*2]
        mov     esi, dword ptr [g_007dc868]
        mov     esi, dword ptr [esi+0x48]
        fld     dword ptr [esi+eax*4+0x28]
        mov     eax, dword ptr [ecx+0x18]
        pop     esi
        fmul    dword ptr [edx+0x14]
        push    0
        push    0
        fstp    dword ptr [ecx+0x34]
        mov     edx, dword ptr [ecx+0x34]
        push    edx
        push    2
        push    eax
        call    FUN_00724350
        ret
    }
}
