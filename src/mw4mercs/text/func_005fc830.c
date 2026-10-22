/*
 * FUN_005fc830 (315 B) — weapon/mech rendering object constructor
 * (__thiscall). Calls base ctor FUN_004fa6d0, initializes member fields,
 * sets up two vtables, conditionally calls FUN_005fc9c0 / FUN_005fca60,
 * and copies a 12-dword constant block twice.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short g_007db0ac;
extern unsigned short g_007db0ae;

extern void __cdecl FUN_004fa6d0(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_005fc9c0(void);
extern void __cdecl FUN_005fca60(void);

__declspec(naked) void FUN_005fc830(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+0x4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x18]
        mov     ebx, ecx
        mov     ecx, dword ptr [esp+0x1c]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, ebx
        call    FUN_004fa6d0
        or      eax, 0xffffffff
        xor     ebp, ebp
        push    0x1
        lea     esi, [ebx+0x28c]
        mov     word ptr [ebx+0x284], ax
        mov     word ptr [ebx+0x286], bp
        push    ebp
        mov     ecx, esi
        mov     word ptr [ebx+0x288], ax
        mov     word ptr [ebx+0x28a], bp
        call    FUN_00416990
        mov     eax, dword ptr [ebx+0x2c]
        cmp     eax, ebp
        lea     ecx, [ebx+0x2c]
        mov     dword ptr [esi], 0x774258
        mov     dword ptr [ebx], 0x78adf4
        jnz     L1
        lea     eax, [edi+0x98]
        push    eax
        call    FUN_00412780
L1:
        mov     cx, word ptr [edi+0x94]
        mov     dx, word ptr [edi+0x96]
        lea     eax, [edi+0x94]
        mov     word ptr [ebx+0x284], cx
        mov     cx, word ptr [edi+0x90]
        lea     esi, [edi+0x90]
        mov     word ptr [ebx+0x286], dx
        mov     dx, word ptr [esi+0x2]
        mov     word ptr [ebx+0x288], cx
        mov     cx, word ptr [eax]
        cmp     cx, word ptr [g_007db0ac]
        mov     dword ptr [ebx+0x280], ebp
        mov     dword ptr [ebx+0x28], ebp
        mov     word ptr [ebx+0x28a], dx
        jnz     L2
        mov     dx, word ptr [eax+0x2]
        cmp     dx, word ptr [g_007db0ae]
        jz      L3
L2:
        mov     ecx, dword ptr [esp+0x1c]
        push    ecx
        push    eax
        mov     ecx, ebx
        call    FUN_005fc9c0
L3:
        mov     dx, word ptr [g_007db0ac]
        cmp     word ptr [esi], dx
        jnz     L4
        mov     ax, word ptr [g_007db0ae]
        cmp     word ptr [esi+0x2], ax
        jz      L5
L4:
        push    esi
        mov     ecx, ebx
        call    FUN_005fca60
L5:
        lea     edi, [ebx+0x214]
        mov     ecx, 0xc
        mov     esi, 0x7b8c98
        rep     movsd
        lea     edi, [ebx+0x244]
        mov     ecx, 0xc
        mov     esi, 0x7b8c98
        rep     movsd
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ebx+0x210], 0x1
        mov     eax, ebx
        pop     ebx
        ret     0x10
    }
}
