/*
 * FUN_006472f0 (204 B) — __thiscall tree lookup/insert helper. Walks a
 * binary tree rooted at *this, then calls FUN_00647fb0 / FUN_004114b0 /
 * FUN_00647f90 / FUN_00647970 to build and finalize a result.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00647fb0(void);
extern void __cdecl FUN_004114b0(void);
extern void __cdecl FUN_00647f90(void);
extern void __cdecl FUN_00647970(void);

__declspec(naked) void __stdcall FUN_006472f0(void *param)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        sub     esp, 0x30
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [ebp]
        push    esi
        mov     esi, dword ptr [ecx + 0x4]
        test    esi, esi
        push    edi
        mov     edi, ecx
        mov     al, 0x1
        jz      L_647322
L_64730a:
        cmp     edx, dword ptr [esi + 0x10]
        setl    al
        test    al, al
        mov     edi, esi
        jz      L_64731b
        mov     esi, dword ptr [esi + 0x8]
        jmp     L_64731e
L_64731b:
        mov     esi, dword ptr [esi + 0xc]
L_64731e:
        test    esi, esi
        jnz     L_64730a
L_647322:
        test    al, al
        mov     dword ptr [esp + 0x10], edi
        jz      L_647364
        cmp     edi, dword ptr [ecx + 0x8]
        jnz     L_647353
        lea     eax, [esp + 0x40]
        push    eax
        push    edi
        push    esi
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, ebp
        call    FUN_00647fb0
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp + 0x1c], edx
        mov     byte ptr [esp + 0x20], 0x1
        lea     eax, [esp + 0x1c]
        jmp     L_6473a9
L_647353:
        lea     ecx, [esp + 0x10]
        push    ecx
        call    FUN_004114b0
        mov     edx, dword ptr [esp + 0x44]
        add     esp, 0x4
L_647364:
        mov     eax, dword ptr [esp + 0x10]
        cmp     dword ptr [eax + 0x10], edx
        jge     L_647391
        lea     ecx, [esp + 0xe]
        push    ecx
        lea     edx, [esp + 0x44]
        push    edx
        push    edi
        push    esi
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, ebp
        mov     byte ptr [esp + 0x22], 0x1
        call    FUN_00647fb0
        push    eax
        lea     ecx, [esp + 0x34]
        jmp     L_6473a4
L_647391:
        lea     ecx, [esp + 0xf]
        push    ecx
        lea     edx, [esp + 0x14]
        mov     byte ptr [esp + 0x13], 0x0
        push    edx
        lea     ecx, [esp + 0x3c]
L_6473a4:
        call    FUN_00647f90
L_6473a9:
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00647970
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x30
        ret     0x4
    }
}
