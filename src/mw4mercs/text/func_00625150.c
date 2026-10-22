/*
 * FUN_00625150 (349 B) — __thiscall, RET 0x10 (4 stack params).
 *   Inserts a node into a doubly-linked list structure with balancing.
 *   Calls FUN_00621910 (lookup), FUN_004084d0 (alloc 0x20),
 *   FUN_00625600 (init), FUN_00410a60 / FUN_00410ab0 (rebalance).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_00621910(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __stdcall FUN_00625600(void *p);
extern void __cdecl FUN_00410a60(void *a, void *b);
extern void __cdecl FUN_00410ab0(void *a, void *b);

__declspec(naked) void __fastcall FUN_00625150(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        push    esi
        mov     esi, dword ptr [ecx]
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        cmp     edi, esi
        mov     dword ptr [esp + 0x10], ecx
        jz      L_6251a4
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jnz     L_6251a4
        lea     eax, [edi + 0x10]
        push    eax
        mov     ecx, ebx
        call    FUN_00621910
        test    al, al
        jnz     L_6251a4
        push    0x20
        call    FUN_004084d0
        mov     ebp, eax
        lea     ecx, [ebp + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_625197
        push    ebx
        call    FUN_00625600
L_625197:
        cmp     edi, dword ptr [esi + 0xc]
        mov     dword ptr [edi + 0xc], ebp
        jnz     L_6251d4
        mov     dword ptr [esi + 0xc], ebp
        jmp     L_6251d4
L_6251a4:
        push    0x20
        call    FUN_004084d0
        mov     ebp, eax
        lea     ecx, [ebp + 0x10]
        add     esp, 0x4
        test    ecx, ecx
        jz      L_6251bd
        push    ebx
        call    FUN_00625600
L_6251bd:
        cmp     edi, esi
        mov     dword ptr [edi + 0x8], ebp
        jnz     L_6251cc
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esi + 0xc], ebp
        jmp     L_6251d4
L_6251cc:
        cmp     edi, dword ptr [esi + 0x8]
        jnz     L_6251d4
        mov     dword ptr [esi + 0x8], ebp
L_6251d4:
        xor     eax, eax
        mov     dword ptr [ebp + 0x4], edi
        lea     edi, [esi + 0x4]
        mov     dword ptr [ebp + 0x8], eax
        mov     dword ptr [ebp + 0xc], eax
        mov     byte ptr [ebp], al
        cmp     ebp, dword ptr [edi]
        mov     esi, ebp
        jz      L_62528f
L_6251ef:
        mov     eax, dword ptr [esi + 0x4]
        cmp     byte ptr [eax], 0x0
        jnz     L_62528f
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [edx + 0x8]
        cmp     eax, ecx
        jnz     L_625247
        mov     ecx, dword ptr [edx + 0xc]
        test    ecx, ecx
        jz      L_625221
        cmp     byte ptr [ecx], 0x0
        jnz     L_625221
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_625287
L_625221:
        cmp     esi, dword ptr [eax + 0xc]
        jnz     L_625232
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410a60
        add     esp, 0x8
L_625232:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410ab0
        jmp     L_625284
L_625247:
        test    ecx, ecx
        jz      L_625260
        cmp     byte ptr [ecx], 0x0
        jnz     L_625260
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        mov     byte ptr [ecx], 0x1
        mov     byte ptr [eax], 0x0
        mov     esi, eax
        jmp     L_625287
L_625260:
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L_625271
        mov     esi, eax
        push    edi
        push    esi
        call    FUN_00410ab0
        add     esp, 0x8
L_625271:
        mov     eax, dword ptr [esi + 0x4]
        mov     byte ptr [eax], 0x1
        mov     eax, dword ptr [eax + 0x4]
        push    edi
        push    eax
        mov     byte ptr [eax], 0x0
        call    FUN_00410a60
L_625284:
        add     esp, 0x8
L_625287:
        cmp     esi, dword ptr [edi]
        jnz     L_6251ef
L_62528f:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [esp + 0x10]
        mov     byte ptr [ecx], 0x1
        mov     ecx, dword ptr [eax + 0x4]
        inc     ecx
        pop     edi
        mov     dword ptr [eax + 0x4], ecx
        mov     eax, dword ptr [esp + 0x14]
        pop     esi
        mov     dword ptr [eax], ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
