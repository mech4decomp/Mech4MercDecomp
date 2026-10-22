/*
 * FUN_0x0054a800 (117 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0054a800(void)
{
    

extern int DAT_007dc6b4;
extern void __cdecl FUN_0072f070(void);
extern void __cdecl FUN_0072ef20(void);
__asm {
push esi
        mov  esi, ecx
        mov  al, [esi+0x175]
        test al, al
        je   done
        mov eax, dword ptr [DAT_007dc6b4]
        mov  eax, [eax+0x34]
        test eax, eax
        je   done
        mov  cl, [eax+0x50]
        test cl, cl
        je   done
        mov  eax, [esi+0x4E0]
        test eax, eax
        je   done
        fld  dword ptr [esp+8]
        mov  ecx, [esp+0x14]
        fchs
        lea  edx, [esi+0x4E4]
        fstp dword ptr [esi+0x4F4]
        push edx
        fld  dword ptr [esp+0x14]
        push eax
        fchs
        mov  [esi+0x4FC], ecx
        fstp dword ptr [esi+0x4F8]
        mov  dword ptr [esi+0x504], 0x3f800000
        call FUN_0072f070
        mov  eax, [esi+0x4E0]
        push 1
        push eax
        call FUN_0072ef20
done:
        pop  esi
        ret  0x10
    }


}
