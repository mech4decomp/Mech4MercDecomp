/*
 * FUN_0064e110 (254 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Vector push/grow helper: if the internal buffer is full, reallocates via
 * FUN_004084d0 / FUN_0059db40 / FUN_0059db20, then dispatches through a
 * vtable slot (EBX+0xc) when a flag in this+4 is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern int __cdecl FUN_0059db40(void *a, void *b, void *c);
extern void __cdecl FUN_0062bc10(void *a, void *b);
extern void __cdecl FUN_0059db20(void *a, int b);
extern int __cdecl FUN_0064df70(void *p);

__declspec(naked) void __stdcall FUN_0064e110(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0xc]
        mov     ebx, dword ptr [edi + 0x10]
        cmp     esi, ebx
        jz      label_0064e137
        test    esi, esi
        jz      label_0064e12c
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esi], eax

    label_0064e12c:
        add     esi, 0x4
        mov     dword ptr [edi + 0xc], esi
        jmp     label_0064e1d0

    label_0064e137:
        push    ebp
        mov     ebp, dword ptr [edi + 0x8]
        mov     eax, esi
        sub     eax, ebp
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      label_0064e15b
        lea     ecx, [esp + 0x14]

    label_0064e15b:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      label_0064e177
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     label_0064e17f

    label_0064e177:
        mov     dword ptr [esp + 0x10], 0x0

    label_0064e17f:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        push    esi
        push    ebp
        call    FUN_0059db40
        mov     ebp, eax
        lea     eax, [esp + 0x28]
        push    eax
        push    ebp
        call    FUN_0062bc10
        add     ebp, 0x4
        push    ebp
        push    esi
        push    esi
        call    FUN_0059db40
        mov     ebp, eax
        mov     eax, dword ptr [edi + 0x8]
        sub     ebx, eax
        add     esp, 0x20
        sar     ebx, 0x2
        push    ebx
        lea     esi, [edi + 0x10]
        push    eax
        mov     ecx, esi
        call    FUN_0059db20
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        lea     edx, [eax + ecx*0x4]
        mov     dword ptr [edi + 0xc], ebp
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [esi], edx
        pop     ebp

    label_0064e1d0:
        mov     esi, dword ptr [edi + 0x4]
        test    esi, 0xfffffffc
        jz      label_0064e205
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_0064df70
        add     esp, 0x4
        test    eax, eax
        jz      label_0064e205
        mov     ecx, dword ptr [esp + 0x18]
        and     esi, 0xfffffffc
        mov     ebx, dword ptr [esi]
        push    ecx
        call    FUN_0064df70
        add     esp, 0x4
        push    eax
        push    edi
        mov     ecx, esi
        call    dword ptr [ebx + 0xc]

    label_0064e205:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x4
    }
}
