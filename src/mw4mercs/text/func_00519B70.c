/*
 * FUN_00519B70 (240 B) — in-.text data block function (block 0x519B62).
 * Uses globals 0x7dd234 / 0x7dd268; calls FUN_006f4950 / FUN_006f4230 /
 * FUN_006f3c80 / FUN_00412780 / FUN_004084e0 / FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f49a0(void);

extern int g_007dd234;   /* DAT_007dd234 */
extern int g_007dd268;   /* DAT_007dd268 */

__declspec(naked) void FUN_00519B70(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [g_007dd234]
        push    ebp
        push    esi
        push    eax
        call    FUN_006f4950
        mov     edx, dword ptr [g_007dd268]
        mov     eax, dword ptr [edx + 0x4c]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [ecx]
        xor     esi, esi
        cmp     eax, esi
        mov     dword ptr [esp + 0xc], esi
        jle     L9C4E
        push    ebx
        push    edi
        mov     dword ptr [esp + 0x10], esi
        jmp     L9BA7
L9BA5:
        xor     esi, esi
L9BA7:
        mov     eax, dword ptr [ebp]
        cmp     eax, esi
        je      L9BB7
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebp], esi
L9BB7:
        push    esi
        push    0x80
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 0x10]
        mov     ebx, eax
        mov     eax, dword ptr [g_007dd268]
        lea     edx, [ecx + eax + 0x1e0]
        push    edx
        lea     ecx, [esp + 0x28]
        mov     dword ptr [ebp], ebx
        mov     dword ptr [esp + 0x28], esi
        call    FUN_00412780
        mov     edi, dword ptr [esp + 0x24]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        mov     eax, dword ptr [esp + 0x24]
        test    eax, eax
        je      L9C21
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L9C21
        push    eax
        call    FUN_004084e0
        add     esp, 4
L9C21:
        mov     eax, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [g_007dd268]
        mov     edx, dword ptr [ecx + 0x4c]
        inc     eax
        add     esi, 0x201
        add     ebp, 4
        cmp     eax, edx
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], esi
        jl      L9BA5
        pop     edi
        pop     ebx
L9C4E:
        call    FUN_006f49a0
        pop     esi
        mov     eax, 1
        pop     ebp
        add     esp, 8
        ret     0xc
    }
}
