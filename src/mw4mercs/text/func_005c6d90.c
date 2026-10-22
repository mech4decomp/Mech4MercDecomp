/*
 * FUN_005C6D90 (164 B) — __fastcall (ECX=this), returns float in ST(0).
 *
 * Enters critical section, computes a squared-distance float from two
 * object transforms (this+0x170 vs singleton), then returns
 * (int)(dist2)>>1 + 0x1fc00000 as a float.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4950(int handle);
extern void __stdcall FUN_006f49a0(void);
extern void *__fastcall FUN_0041fd80(void *this);

__declspec(naked) float __fastcall FUN_005c6d90(void)
{
    

extern int DAT_007f2460;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        mov eax, dword ptr [DAT_007f2460]
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        lea     ecx, [esi + 0x1C8]
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xD8]
        mov     ecx, dword ptr [eax + 0x9C]
        fld     dword ptr [eax + 0x8C]
        mov     edx, dword ptr [eax + 0xAC]
        add     eax, 0x80
        mov     eax, dword ptr [esi + 0x170]
        mov     eax, dword ptr [eax + 0xD8]
        fsubr   dword ptr [eax + 0x8C]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x1C], ecx
        mov     ecx, dword ptr [eax + 0x1C]
        mov     dword ptr [ebp - 0x18], edx
        mov     edx, dword ptr [eax + 0x2C]
        mov     dword ptr [ebp - 0x10], ecx
        fld     dword ptr [ebp - 0x10]
        fsub    dword ptr [ebp - 0x1C]
        mov     dword ptr [ebp - 0xC], edx
        fld     dword ptr [ebp - 0xC]
        fsub    dword ptr [ebp - 0x18]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fstp    dword ptr [ebp - 0x4]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp - 0x4]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0x8], eax
        call    FUN_006f49a0
        fld     dword ptr [ebp - 0x8]
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}
