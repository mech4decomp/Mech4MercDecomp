/*
 * FUN_005a0dd0 (115 B) — Constructor-like function (__thiscall). Takes 4
 * parameters, initializes sub-objects, sets up vtables, and returns this.
 *
 * __thiscall (ECX = this), RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f35f0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_005f5670(void);
extern void __cdecl FUN_005a0f00(void);
extern void __cdecl FUN_004179b0(void);

void __declspec(naked) __cdecl FUN_005a0dd0(void)
{
    

extern int DAT_007f202c;
__asm {
mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    ebx
        push    edx
        mov     ecx, esi
        call    FUN_005f35f0

        lea     edi, [esi + 0x518]
        push    0x0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x783eac

        lea     edi, [esi + 0x520]
        push    0x0
        mov     ecx, edi
        call    FUN_0041fc80
        mov     dword ptr [edi], 0x77ceac

        mov     ecx, esi
        mov     dword ptr [esi], 0x783d44
        call    FUN_005f5670

        push    ebx
        mov     ecx, esi
        call    FUN_005a0f00

        mov ecx, dword ptr [DAT_007f202c]

        push    esi
        call    FUN_004179b0

        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }


}
