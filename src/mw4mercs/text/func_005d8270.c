/*
 * FUN_005d8270 (86 B) — Remove the node at index `param` from the array at
 * +0x10: detach its two sub-lists (FUN_005d6b50), free the node, and null
 * the slot.
 *
 * __thiscall (ECX = this), one stack param, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005d8270(void *param)
{
    

extern void __cdecl FUN_1005d6b33(void);
extern void __cdecl FUN_1005d6b1d(void);
extern void __cdecl FUN_1004084a1(void);
__asm {
mov     eax, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [esp + 0x4]
        push    esi
        lea     esi, [eax + ecx*0x4]
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L82AD
        mov     edx, eax
        mov     eax, dword ptr [edx + 0x4]
        test    eax, eax
        jz      L8297
        mov     eax, edx
        mov     ecx, edx
        mov     ecx, dword ptr [ecx + 0x4]
        push    eax
        call FUN_1005d6b33
L8297:
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0x8]
        test    eax, eax
        jz      L82AD
        mov     eax, edx
        mov     ecx, edx
        mov     ecx, dword ptr [ecx + 0x8]
        push    eax
        call FUN_1005d6b1d
L82AD:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L82BC
        push    eax
        call FUN_1004084a1
        add     esp, 0x4
L82BC:
        mov     dword ptr [esi], 0x0
        pop     esi
        ret     0x4
    }


}
