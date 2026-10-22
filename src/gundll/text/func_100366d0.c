/*
 * FUN_100366d0 (279 B) — __thiscall (ECX = this), RET 0x4.
 * Builds/registers an object; allocates a buffer, calls a virtual to fill it,
 * and stores results into the object.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_10034960(void);

__declspec(naked) void FUN_100366d0(void)
{
    __asm {
        push    -0x1
        push    0x10048c3b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x24
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x3c]
        mov     eax, dword ptr [ebp + 0x8]
        push    esi
        push    edi
        push    0x0
        lea     edx, [esp + 0x18]
        push    edx
        mov     dword ptr [esp + 0x18], eax
        lea     edx, [esp + 0x24]
        push    edx
        mov     edx, dword ptr [ebp + 0x4]
        mov     eax, 0x18
        mov     edi, ecx
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        xor     esi, esi
        xor     bl, bl
        call    dword ptr [ecx + 0x54]
        test    eax, eax
        jl      L_67d0
        mov     al, byte ptr [esp + 0x30]
        test    al, 0x2
        jz      L_673b
        mov     ecx, dword ptr [ebp + 0x4]
        mov     dword ptr [edi + 0x1c], ecx
        mov     bl, 0x1
    L_673b:
        test    al, 0x4
        jz      L_6745
        mov     edx, dword ptr [ebp + 0x4]
        mov     dword ptr [edi + 0x20], edx
    L_6745:
        test    bl, bl
        jnz     L_67d0
        mov     eax, dword ptr [edi + 0x18]
        push    0x30
        mov     dword ptr [esp + 0x48], eax
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0x18], esi
        test    esi, esi
        mov     dword ptr [esp + 0x3c], 0x0
        jz      L_6795
        mov     eax, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebp + 0x4]
        push    eax
        push    esi
        push    ecx
        push    edi
        push    edx
        lea     ecx, [esi + 0x4]
        mov     dword ptr [esi], 0x1004b0f4
        call    FUN_10034960
        mov     dword ptr [esi], 0x1004b2f8
        jmp     L_6797
    L_6795:
        xor     esi, esi
    L_6797:
        test    esi, esi
        mov     dword ptr [esp + 0x3c], 0xffffffff
        jz      L_67d0
        push    edi
        lea     edx, [esp + 0x48]
        push    edx
        lea     edx, [esp + 0x18]
        push    edx
        mov     dword ptr [ebp + 0x8], esi
        mov     eax, dword ptr [edi + 0x14]
        mov     ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0xc], eax
        mov     eax, dword ptr [esp + 0x44]
        test    eax, eax
        jnz     L_67cd
        mov     eax, dword ptr [edi + 0x18]
    L_67cd:
        mov     dword ptr [esi + 0x18], eax
    L_67d0:
        mov     ecx, dword ptr [esp + 0x34]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x30
        ret     0x4
    }
}
