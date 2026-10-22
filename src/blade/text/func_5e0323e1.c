/*
 * FUN_5e0323e1 (124 B) - table-driven fixed-point accumulator update.
 * Selects a 0x15-entry (21-entry) table based on the sign of param_2,
 * walks it 3 dwords at a time, and combines entries into param_1 via
 * FUN_5e0321c1. Handles a carry/rounding special case when a table word
 * exceeds 0x7fff.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e0321c1(void);
extern char g_5e03a0c0;
extern char g_5e03a220;

__declspec(naked) void FUN_5e0323e1(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        mov     ebx, offset g_5e03a0c0
        xor     ecx, ecx
        sub     ebx, 0x60
        cmp     dword ptr [ebp+0xc], ecx
        jz      L45a
        jge     L409
        mov     eax, dword ptr [ebp+0xc]
        mov     ebx, offset g_5e03a220
        neg     eax
        mov     dword ptr [ebp+0xc], eax
        sub     ebx, 0x60
    L409:
        cmp     dword ptr [ebp+0x10], ecx
        jnz     L414
        mov     eax, dword ptr [ebp+0x8]
        mov     word ptr [eax], cx
    L414:
        cmp     dword ptr [ebp+0xc], ecx
        jz      L45a
        push    esi
        push    edi
    L41b:
        mov     eax, dword ptr [ebp+0xc]
        add     ebx, 0x54
        sar     dword ptr [ebp+0xc], 0x3
        and     eax, 0x7
        cmp     eax, ecx
        jz      L453
        lea     eax, [eax+eax*2]
        cmp     word ptr [ebx+eax*4], 0x8000
        lea     esi, [ebx+eax*4]
        jc      L446
        lea     edi, [ebp-0xc]
        movsd
        movsd
        movsd
        dec     dword ptr [ebp-0xa]
        lea     esi, [ebp-0xc]
    L446:
        push    esi
        push    dword ptr [ebp+0x8]
        call    FUN_5e0321c1
        pop     ecx
        pop     ecx
        xor     ecx, ecx
    L453:
        cmp     dword ptr [ebp+0xc], ecx
        jnz     L41b
        pop     edi
        pop     esi
    L45a:
        pop     ebx
        leave
        ret
    }
}
