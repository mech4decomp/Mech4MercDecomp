/*
 * FUN_005DC370 (298 B) — Complex state-machine update. Reads several
 * flag bytes on `this`, consults global tables at 0x007DAB44/0x007DAB40
 * and 0x007B220C, calls FUN_0041C540, iterates a linked list calling a
 * virtual method, and dispatches virtual methods at vtable+0x110 /
 * vtable+0x10C depending on flag this+0x30A.
 *
 * __fastcall (ECX = this), RET 8 (two stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005dc370(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007b220c;
extern void __cdecl FUN_10041c49b(void);
__asm {
sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x2F0]
        test    al, al
        push    edi
        jnz     L490
        mov     al, byte ptr [esi + 0x2F1]
        test    al, al
        jz      L490
        mov     al, byte ptr [esi + 0x300]
        test    al, al
        jnz     L475
        mov eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]
        mov ecx, dword ptr [DAT_007dab40]
        xor     edx, ecx
        mov     edx, dword ptr [edx + 0xC]
        xor     edx, 0x85739531
        mov     bl, byte ptr [edx + 0x17]
        test    bl, bl
        jnz     L475
        mov     eax, dword ptr [eax]
        mov     ebp, dword ptr [esi + 0x170]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [ebp + 0xD8]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x1F4]
        add     eax, 0x80
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [eax + 0xC]
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [eax + 0x1C]
        mov     dword ptr [esp + 0x18], edx
        mov     eax, dword ptr [eax + 0x2C]
        mov     dword ptr [esp + 0x1C], eax
        mov     edi, dword ptr [ecx + 0x1EC]
        mov ecx, dword ptr [DAT_007b220c]
        push    ecx
        lea     edx, [esp + 0x18]
        push    0x7B8D78
        push    edx
        call FUN_10041c49b
        add     esp, 0xC
        test    al, al
        jnz     L450
        mov     ebx, dword ptr [esp + 0x10]
    L42a:
        test    edi, edi
        jz      L450
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        mov     edi, dword ptr [edi + 0x4]
        jz      L450
        mov     eax, dword ptr [ecx]
        push    1
        push    ebx
        push    ebp
        call    dword ptr [eax + 0x5C]
        test    al, al
        jz      L42a
        mov     al, byte ptr [esi + 0x30A]
        test    al, al
        jz      L490
        jmp     L47f
    L450:
        mov     al, byte ptr [esi + 0x30A]
        test    al, al
        jnz     L490
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     byte ptr [esi + 0x30A], 1
        call    dword ptr [eax + 0x110]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     8
    L475:
        mov     al, byte ptr [esi + 0x30A]
        test    al, al
        jz      L490
    L47f:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     byte ptr [esi + 0x30A], 0
        call    dword ptr [edx + 0x10C]
    L490:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     8
    }


}
