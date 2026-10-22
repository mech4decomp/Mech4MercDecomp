/*
 * FUN_005DDDB0 (258 B) — __thiscall (this in ECX), RET 0xC (3 stack args).
 * String-buffer insert/replace helper. Grows the buffer via FUN_004084D0
 * (alloc) when capacity is insufficient, memmoves the tail, and updates
 * the buffer's begin/end pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void * __cdecl FUN_004084e0(void *);
extern void * __cdecl FUN_005cc0f0(void *, void *, void *, void *, int);

__declspec(naked) void __fastcall FUN_005dddb0(void)
{
    __asm {
        push    ecx
        mov     edx, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        cmp     edx, edi
        mov     esi, ecx
        jz      LDEA8
        mov     ebp, dword ptr [esi + 0x4]
        mov     ebx, dword ptr [esi]
        mov     ecx, edi
        sub     ecx, edx
        mov     edx, dword ptr [esi + 0x8]
        mov     eax, ebp
        sub     eax, ebx
        sub     edx, ebx
        mov     dword ptr [esp + 0x1c], ecx
        dec     edx
        add     ecx, eax
        cmp     ecx, edx
        mov     dword ptr [esp + 0x10], eax
        jbe     LDE7C
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], ecx
        cmp     eax, ecx
        lea     ecx, [esp + 0x1c]
        jc      LDE00
        lea     ecx, [esp + 0x10]
LDE00:
        mov     ecx, dword ptr [ecx]
        lea     eax, [ecx + eax + 0x1]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      LDE1D
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        jmp     LDE25
LDE1D:
        mov     dword ptr [esp + 0x1c], 0x0
LDE25:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x1c]
        push    0x0
        push    edx
        push    eax
        push    ebp
        push    ebx
        call    FUN_005cc0f0
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x2c]
        push    0x0
        push    ecx
        push    eax
        push    edi
        push    edx
        call    FUN_005cc0f0
        add     esp, 0x28
        test    ebx, ebx
        mov     edi, eax
        mov     byte ptr [edi], 0x0
        jz      LDE60
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
LDE60:
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [esi], eax
        add     eax, ecx
        mov     dword ptr [esi + 0x4], edi
        pop     edi
        mov     dword ptr [esi + 0x8], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
LDE7C:
        mov     edx, dword ptr [esp + 0x18]
        lea     ecx, [edx + 0x1]
        sub     edi, ecx
        test    edi, edi
        lea     eax, [ebp + 0x1]
        jle     LDE97
        sub     ecx, eax
LDE8E:
        mov     bl, byte ptr [ecx + eax]
        mov     byte ptr [eax], bl
        inc     eax
        dec     edi
        jnz     LDE8E
LDE97:
        mov     eax, dword ptr [esp + 0x1c]
        add     eax, ebp
        mov     byte ptr [eax], 0x0
        mov     cl, byte ptr [edx]
        mov     byte ptr [ebp], cl
        mov     dword ptr [esi + 0x4], eax
LDEA8:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
