/*
 * FUN_005ef720 (119 B) — __thiscall setter with float param (RET 4).
 *
 * If param == 0.0 (global 0x76C5B0) and this->1C0 != 0.0, calls
 * FUN_00707E70(0) and stores the returned double into this->1B8.
 * Then calls FUN_0041FD80 on this+0x1A4; if non-null, calls
 * FUN_0041FD80(param) then FUN_005BF990 on the result. Finally
 * stores param into this->1C0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __cdecl FUN_00707e70(int param);
extern void *__cdecl FUN_0041fd80(void);
extern void __stdcall FUN_005bf990(void);

__declspec(naked) void __stdcall FUN_005ef720(float param)
{
    

extern int DAT_0076c5b0;
__asm {
fld     dword ptr [esp + 0x4]
        push    esi
        fcomp dword ptr [DAT_0076c5b0]
        push    edi
        mov     esi, ecx
        fnstsw ax
        test    ah, 0x40
        jz      l_755
        fld     dword ptr [esi + 0x1C0]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw ax
        test    ah, 0x40
        jnz     l_755
        push    0x0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x1B8]
    l_755:
        lea     edi, [esi + 0x1A4]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      l_788
        mov     eax, dword ptr [esp + 0xC]
        push    eax
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, eax
        call    FUN_005bf990
        mov     ecx, dword ptr [esp + 0xC]
        pop     edi
        mov     dword ptr [esi + 0x1C0], ecx
        pop     esi
        ret     0x4
    l_788:
        mov     edx, dword ptr [esp + 0xC]
        pop     edi
        mov     dword ptr [esi + 0x1C0], edx
        pop     esi
        ret     0x4
    }


}
