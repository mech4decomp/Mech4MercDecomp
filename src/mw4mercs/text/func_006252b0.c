/*
 * FUN_006252B0 (474 B) — Ordered-map node insertion (__thiscall, RET 8).
 *
 * ECX = this (map header), [ESP+4] = out node ptr, [ESP+8] = key.
 * Walks the tree comparing keys via FUN_00621910, then inserts a new
 * node (allocated via FUN_004084d0 / FUN_00625580 or FUN_00625490),
 * relinking the doubly-linked list and bumping this+4 count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_00621910(void *key);
extern void *__cdecl FUN_00625490(void *key);
extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_00625580(void *dst, void *key);
extern void __cdecl FUN_00411670(void *node, void *head);
extern void __cdecl FUN_004114b0(void *local);
extern void *__cdecl FUN_00625540(void *a, void *b);
extern void __cdecl FUN_00625560(void *a);

__declspec(naked) void __fastcall FUN_006252b0(void *param1, void *param2)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [ebp + 4]
        test    edi, edi
        mov     esi, ebp
        mov     al, 0x1
        jz      L_6252e5
L_6252c6:
        mov     ecx, dword ptr [esp + 0x24]
        lea     eax, [edi + 0x10]
        push    eax
        mov     esi, edi
        call    FUN_00621910
        test    al, al
        jz      L_6252de
        mov     edi, dword ptr [edi + 8]
        jmp     L_6252e1
L_6252de:
        mov     edi, dword ptr [edi + 0xc]
L_6252e1:
        test    edi, edi
        jnz     L_6252c6
L_6252e5:
        test    al, al
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        jz      L_6253a5
        cmp     esi, dword ptr [ebp + 8]
        jnz     L_625394
        cmp     esi, ebp
        jz      L_625330
        test    edi, edi
        jnz     L_625330
        mov     edi, dword ptr [esp + 0x24]
        lea     ecx, [esi + 0x10]
        push    ecx
        mov     ecx, edi
        call    FUN_00621910
        test    al, al
        jnz     L_625330
        push    edi
        mov     ecx, ebx
        call    FUN_00625490
        mov     ebp, dword ptr [ebx]
        mov     edi, eax
        mov     dword ptr [esi + 0xc], edi
        cmp     esi, dword ptr [ebp + 0xc]
        jnz     L_625361
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_625361
L_625330:
        push    0x20
        call    FUN_004084d0
        mov     edx, dword ptr [esp + 0x28]
        mov     edi, eax
        push    edx
        lea     eax, [edi + 0x10]
        push    eax
        call    FUN_00625580
        add     esp, 0xc
        cmp     esi, ebp
        mov     dword ptr [esi + 8], edi
        jnz     L_625359
        mov     dword ptr [ebp + 4], edi
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_625361
L_625359:
        cmp     esi, dword ptr [ebp + 8]
        jnz     L_625361
        mov     dword ptr [ebp + 8], edi
L_625361:
        add     ebp, 0x4
        xor     eax, eax
        push    ebp
        push    edi
        mov     dword ptr [edi + 4], esi
        mov     dword ptr [edi + 8], eax
        mov     dword ptr [edi + 0xc], eax
        call    FUN_00411670
        mov     eax, dword ptr [ebx + 4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebx + 4], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [eax + 4], 0x1
        pop     ebx
        add     esp, 0xc
        ret     8
L_625394:
        lea     ecx, [esp + 0x10]
        push    ecx
        call    FUN_004114b0
        mov     ecx, dword ptr [esp + 0x14]
        add     esp, 0x4
L_6253a5:
        mov     edx, dword ptr [esp + 0x24]
        mov     al, byte ptr [ecx + 0x10]
        mov     dl, byte ptr [edx]
        cmp     al, dl
        jnz     L_6253be
        mov     ax, word ptr [ecx + 0x12]
        mov     ecx, dword ptr [esp + 0x24]
        cmp     ax, word ptr [ecx + 2]
L_6253be:
        sbb     eax, eax
        neg     eax
        test    al, al
        jz      L_62545a
        cmp     esi, ebp
        jz      L_625400
        test    edi, edi
        jnz     L_625400
        mov     ecx, dword ptr [esp + 0x24]
        lea     edx, [esi + 0x10]
        push    edx
        call    FUN_00621910
        test    al, al
        jnz     L_625400
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        mov     ecx, ebx
        call    FUN_00625490
        mov     edi, eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esi + 0xc], edi
        cmp     esi, dword ptr [eax + 0xc]
        jnz     L_625427
        mov     dword ptr [eax + 0xc], edi
        jmp     L_625427
L_625400:
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    FUN_00625490
        mov     edi, eax
        mov     eax, dword ptr [ebx]
        cmp     esi, eax
        mov     dword ptr [esi + 8], edi
        jnz     L_62541f
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax + 0xc], edi
        jmp     L_625427
L_62541f:
        cmp     esi, dword ptr [eax + 8]
        jnz     L_625427
        mov     dword ptr [eax + 8], edi
L_625427:
        add     eax, 0x4
        xor     ecx, ecx
        push    eax
        push    edi
        mov     dword ptr [edi + 4], esi
        mov     dword ptr [edi + 8], ecx
        mov     dword ptr [edi + 0xc], ecx
        call    FUN_00411670
        mov     eax, dword ptr [ebx + 4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebx + 4], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [eax + 4], 0x1
        pop     ebx
        add     esp, 0xc
        ret     8
L_62545a:
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x1c]
        mov     byte ptr [esp + 0x2c], 0x0
        call    FUN_00625540
        mov     esi, dword ptr [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    FUN_00625560
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     8
    }
}
