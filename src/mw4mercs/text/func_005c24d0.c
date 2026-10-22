/*
 * FUN_005c24d0 (204 B) — __thiscall (ECX = this), RET 0xc (3 stack args).
 * Dispatches based on a flag byte and a param; performs 64-bit global
 * decrements on success.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_005c8f30(void *a, void *b);
extern char __cdecl FUN_005c3380(void *a, void *b);
extern char __cdecl FUN_005c36b0(void *a, void *b);

__declspec(naked) void func_005c24d0(void)
{
    

extern int DAT_007f2378;
extern int DAT_007f22e8;
extern int DAT_007f237c;
extern int DAT_007f22ec;
__asm {
push    esi
        mov     esi, ecx
        cmp     byte ptr [esi + 0x30a], 0x1
        jnz     l_250c
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax + 0x30]
        mov     dl, byte ptr [esp + 0x10]
        mov     dword ptr [esi + 0x5f8], ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        push    eax
        mov     ecx, esi
        mov     byte ptr [esi + 0x5fc], dl
        call    FUN_005c8f30
        mov     byte ptr [esi + 0x5fd], al
        mov     al, 0x1
        pop     esi
        ret     0xc
    l_250c:
        cmp     byte ptr [esp + 0x10], 0x1
        jnz     l_2554
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0xc]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_005c3380
        cmp     al, 0x1
        jnz     l_2596
        mov edx, dword ptr [DAT_007f2378]
        mov ecx, dword ptr [DAT_007f22e8]
        mov eax, dword ptr [DAT_007f237c]
        sub     edx, ecx
        mov dword ptr [DAT_007f2378], edx
        mov edx, dword ptr [DAT_007f22ec]
        sbb     eax, edx
        mov dword ptr [DAT_007f237c], eax
        mov     al, 0x1
        pop     esi
        ret     0xc
    l_2554:
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005c36b0
        cmp     al, 0x1
        jnz     l_2596
        mov esi, dword ptr [DAT_007f2378]
        mov edx, dword ptr [DAT_007f22e8]
        mov eax, dword ptr [DAT_007f22ec]
        mov ecx, dword ptr [DAT_007f237c]
        sub     esi, edx
        sbb     ecx, eax
        mov dword ptr [DAT_007f2378], esi
        mov dword ptr [DAT_007f237c], ecx
        mov     al, 0x1
        pop     esi
        ret     0xc
    l_2596:
        xor     al, al
        pop     esi
        ret     0xc
    }


}
