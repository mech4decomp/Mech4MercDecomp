/*
 * FUN_005e5c10 (148 B) — __thiscall, RET 4 (1 stack param).
 *
 * Reads a 2D aim target from the object's basis, queries a lookup
 * table via FUN_005fb760, and stores the resulting 16-bit ID pair
 * into ESI+0x2ce/0x2d0, setting a "changed" flag if it differs.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_005fb760(void);

/* absolute word operands (extern symbols -> correct opcode + masked reloc) */
extern short DAT_007db0ac;
extern short DAT_007db0ae;

__declspec(naked) void __stdcall FUN_005e5c10(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x260]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_5c9c
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 8], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [esp + 0xc], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     edx, dword ptr [esp + 0x18]
        lea     ecx, [esp + 8]
        push    ecx
        mov     dword ptr [esp + 0x14], eax
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, eax
        call    FUN_005fb760
        mov     cx, word ptr [eax]
        mov     dx, word ptr [eax + 2]
        mov     ax, cx
        cmp     ax, word ptr [DAT_007db0ac]
        mov     word ptr [esi + 0x2ce], cx
        mov     word ptr [esi + 0x2d0], dx
        jnz     L_5c95
        mov     cx, dx
        cmp     cx, word ptr [DAT_007db0ae]
        jz      L_5c9c
    L_5c95:
        mov     byte ptr [esi + 0x2cc], 1
    L_5c9c:
        pop     edi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
