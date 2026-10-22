/*
 * FUN_005ac140 (71 B) - __thiscall setter.
 *
 * If param==0, stores 0 at this+0x5C. Else if float at this+0x54 >
 * _DAT_0076c5b0, optionally calls FUN_00559be0(0x1a) then stores param
 * at this+0x5C.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_00559be0(int param);

__declspec(naked) void __stdcall FUN_005ac140(void *param)
{
    

extern int DAT_0076c5b0;
__asm {
push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        test    edi, edi
        mov     esi, ecx
        jz      L1
        fld     dword ptr [esi + 0x54]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L2
        mov     eax, dword ptr [esi + 0xA0]
        mov     ecx, dword ptr [eax + 0x3B0]
        test    ecx, ecx
        jz      L3
        push    0x1A
        call    FUN_00559be0
L3:
        mov     dword ptr [esi + 0x5C], edi
        pop     edi
        pop     esi
        ret     4
L1:
        mov     dword ptr [esi + 0x5C], 0
L2:
        pop     edi
        pop     esi
        ret     4
    }


}
