/*
 * FUN_00617A70 (212 B) — __thiscall (ECX=this, RET 8). Constructs a
 * temporary object, iterates a linked list of nodes comparing strings
 * (byte-by-byte strcmp loop), and updates node fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_005df0d0(void);
extern void __cdecl FUN_00617920(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_00617a70(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x24]
        push    esi
        push    edi
        mov     esi, ecx
        push    0x1
        push    ecx
        mov     ecx, esp
        push    ebp
        call    FUN_0040f060
        mov     ecx, dword ptr [esi + 0x38]
        call    FUN_005df0d0
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    FUN_00617920
        add     esi, 0x40
        push    esi
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_00416bc0
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0x77a38c
        call    FUN_00416cc0
        mov     edi, eax
        xor     ebx, ebx
        cmp     edi, ebx
        jz      l_19
    l_ca:
        mov     ecx, dword ptr [edi + 0x18]
        cmp     ecx, ebx
        jz      l_0a
        mov     esi, dword ptr [ebp]
        mov     ecx, dword ptr [ecx + 0x10]
    l_d7:
        mov     al, byte ptr [ecx]
        mov     dl, al
        cmp     al, byte ptr [esi]
        jnz     l_fb
        cmp     dl, bl
        jz      l_f7
        mov     al, byte ptr [ecx + 0x1]
        mov     dl, al
        cmp     al, byte ptr [esi + 0x1]
        jnz     l_fb
        add     ecx, 0x2
        add     esi, 0x2
        cmp     dl, bl
        jnz     l_d7
    l_f7:
        xor     ecx, ecx
        jmp     l_00
    l_fb:
        sbb     ecx, ecx
        sbb     ecx, -0x1
    l_00:
        cmp     ecx, ebx
        jnz     l_0a
        mov     dword ptr [edi + 0x18], ebx
        mov     byte ptr [edi + 0x1c], bl
    l_0a:
        lea     ecx, [esp + 0x10]
        call    FUN_00416cc0
        mov     edi, eax
        cmp     edi, ebx
        jnz     l_ca
    l_19:
        mov     eax, dword ptr [esp + 0x2c]
        cmp     eax, ebx
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [ecx + 0x18], eax
        jz      l_2e
        mov     byte ptr [ecx + 0x1c], 0x1
        jmp     l_31
    l_2e:
        mov     byte ptr [ecx + 0x1c], bl
    l_31:
        lea     ecx, [esp + 0x10]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x8
    }
}
