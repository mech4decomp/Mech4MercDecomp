/*
 * FUN_005c3ad0 (146 B) — __stdcall RET 0x1C, 7 stack params + ECX this.
 * Returns bool in AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __stdcall FUN_00415230(void *a);
extern void __stdcall FUN_005c8f30(void *a, void *b);
extern void __stdcall FUN_005c3b70(void *a, void *b, void *c, void *d, void *e, void *f, void *g, void *h);

__declspec(naked) void __stdcall FUN_005c3ad0(void *a, void *b, void *c, void *d, void *e, void *f, void *g)
{
    

extern int DAT_007f25c0;
extern int DAT_007f2360;
extern int DAT_007f22e8;
extern int DAT_007f2364;
extern int DAT_007f22ec;
__asm {
mov eax, dword ptr [DAT_007f25c0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     esi, ecx
        mov     ecx, dword ptr [edi + 0x4]
        xor     ebx, ebx
        push    eax
        mov     dword ptr [esi + 0x54c], ebx
        xor     ebp, ebp
        call    FUN_00415230
        cmp     al, 0x1
        jnz     L_3af8
        mov     ebp, edi
L_3af8:
        cmp     byte ptr [esp + 0x2c], 0x1
        mov     dword ptr [esp + 0x14], ebx
        jnz     L_3b07
        mov     dword ptr [esp + 0x14], edi
L_3b07:
        mov     ebx, dword ptr [esp + 0x28]
        push    ebx
        push    edi
        mov     ecx, esi
        call    FUN_005c8f30
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x1c]
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    ebp
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        push    ecx
        push    edx
        push    eax
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_005c3b70
        mov edx, dword ptr [DAT_007f2360]
        mov ecx, dword ptr [DAT_007f22e8]
        mov eax, dword ptr [DAT_007f2364]
        sub     edx, ecx
        pop     edi
        mov dword ptr [DAT_007f2360], edx
        mov edx, dword ptr [DAT_007f22ec]
        pop     esi
        sbb     eax, edx
        pop     ebp
        mov dword ptr [DAT_007f2364], eax
        mov     al, 0x1
        pop     ebx
        ret     0x1c
    }


}
