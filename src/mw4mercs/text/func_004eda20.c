/*
 * FUN_004eda20 (250 B) — __thiscall (ECX=this, RET 0x4). MLR quad-stack
 * object constructor: builds a stack of quads (param_1 count), sets up
 * vtables, allocates a 0x164-byte object via FUN_004b9f50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern int g_00849304;
extern int g_007daa48;

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004b9f50(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_00416180(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_004eda20(void)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        lea     edi, [esi + 0x10]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        mov     ecx, dword ptr [g_00849304]
        mov     ebp, dword ptr [esp + 0x28]
        push    ecx
        push    0x774a24
        lea     edx, [ebp + 0x14]
        push    edx
        push    ebp
        lea     ebx, [esi + 0x18]
        push    0x14
        mov     ecx, ebx
        mov     dword ptr [edi], 0x774a0c
        call    FUN_00415d70
        mov     eax, dword ptr [g_007daa48]
        push    eax
        mov     dword ptr [ebx + 0x2c], 0x0
        mov     dword ptr [esi], 0x774a08
        call    FUN_006f4950
        push    0x164
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L1
        push    ebp
        mov     ecx, eax
        call    FUN_004b9f50
        mov     dword ptr [esp + 0x28], eax
        jmp     L2
L1:
        mov     dword ptr [esp + 0x28], 0x0
L2:
        call    FUN_006f49a0
        mov     ecx, dword ptr [esp + 0x28]
        push    ecx
        mov     ecx, edi
        call    FUN_0041fcd0
        lea     edi, [ebp - 0x1]
        test    edi, edi
        jl      L_done
        mov     ebp, 0x774a04
L_loop:
        mov     edx, dword ptr [g_007b8c10]
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_00415180
        xor     eax, eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], eax
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x24], edi
        call    FUN_00416180
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], ebp
        call    FUN_00415380
        dec     edi
        jns     L_loop
L_done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x4
    }
}
