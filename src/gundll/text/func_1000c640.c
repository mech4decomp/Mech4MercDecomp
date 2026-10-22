/*
 * FUN_1000C640 (237 B) - __thiscall, RET 0xC.  Builds a hash/bitmap table
 * descriptor: computes bit counts from arg1/arg2, allocates a table via
 * FUN_10001d50, then fills it in a loop, allocating per-slot objects via
 * FUN_1000c2e0.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);   /* rel32 call (alloc) */
extern void __cdecl FUN_1000c2e0(void);   /* rel32 call (ctor) */

__declspec(naked) void __stdcall FUN_1000C640(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        test    edx, edx
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     dword ptr [ebp], 0
        mov     byte ptr [ebp + 4], 0
        mov     byte ptr [ebp + 5], 0
        mov     byte ptr [ebp + 6], 0
        je      L_1000c726
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, 1
        jbe     short L_1000c67c
        xor     cl, cl
        mov     edi, edi
L_1000c670:
        shr     eax, 1
        inc     cl
        cmp     eax, 1
        ja      short L_1000c670
        mov     byte ptr [ebp + 5], cl
L_1000c67c:
        xor     al, al
        mov     edi, edi
L_1000c680:
        shr     edx, 1
        inc     al
        test    edx, edx
        jne     short L_1000c680
        mov     bl, byte ptr [ebp + 5]
        mov     byte ptr [ebp + 6], al
        sub     al, bl
        inc     al
        mov     byte ptr [ebp + 4], al
        movzx   eax, al
        shl     eax, 2
        push    eax
        call    FUN_10001d50
        mov     dword ptr [ebp], eax
        mov     al, byte ptr [ebp + 4]
        add     esp, 4
        test    al, al
        mov     byte ptr [esp + 0xc], 0
        jbe     L_1000c726
        push    esi
        push    edi
L_1000c6b5:
        movzx   ebx, byte ptr [esp + 0x14]
        xor     ecx, ecx
        mov     cl, byte ptr [ebp + 5]
        mov     esi, 1
        xor     edx, edx
        mov     eax, 0xff0
        add     ecx, ebx
        shl     esi, cl
        div     esi
        mov     edi, eax
        cmp     edi, 8
        ja      short L_1000c6ed
        xor     edx, edx
        mov     eax, 0x1ff0
        div     esi
        mov     edi, 2
        cmp     eax, 2
        jb      short L_1000c6ed
        mov     edi, eax
L_1000c6ed:
        push    0x3c
        call    FUN_10001d50
        add     esp, 4
        test    eax, eax
        je      short L_1000c70b
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    edi
        push    esi
        mov     ecx, eax
        call    FUN_1000c2e0
        jmp     short L_1000c70d
L_1000c70b:
        xor     eax, eax
L_1000c70d:
        mov     edx, dword ptr [ebp]
        mov     dword ptr [edx + ebx*4], eax
        mov     al, byte ptr [esp + 0x14]
        mov     cl, byte ptr [ebp + 4]
        inc     al
        cmp     al, cl
        mov     byte ptr [esp + 0x14], al
        jb      short L_1000c6b5
        pop     edi
        pop     esi
L_1000c726:
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
