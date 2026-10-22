/*
 * FUN_005bf650 (225 B) — __thiscall (ECX = this), RET 0x14 (five stack params).
 *
 * Calls FUN_00415180(DAT_007f22b0), initializes this with -1.0f constants,
 * strdup's param_1 into a FUN_004084d0 buffer, copies a 4x4 matrix from
 * param_3, stores param_2/param_4/param_5, and calls a virtual method on
 * param_5+0x78 to fetch a value into this->[0x40]. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415180(void);
extern void FUN_004084d0(void);

__declspec(naked) void __stdcall FUN_005bf650(void *param)
{
    

extern int DAT_007f22b0;
__asm {
        mov eax, dword ptr [DAT_007f22b0]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_00415180
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, 0xbf800000
        mov     dword ptr [ebx + 0x1c], eax
        mov     dword ptr [ebx + 0x8], 0x0
        mov     dword ptr [ebx + 0xc], 0x0
        mov     dword ptr [ebx + 0x24], eax
        mov     dword ptr [ebx + 0x20], eax
        mov     dword ptr [ebx + 0x28], eax
        mov     dword ptr [ebx + 0x2c], eax
        mov     dword ptr [ebx + 0x34], eax
        mov     dword ptr [ebx + 0x30], eax
        mov     dword ptr [ebx + 0x38], eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        mov     dword ptr [ebx], 0x78721c
        call    FUN_004084d0
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        mov     edi, esi
        add     esp, 0x4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     dword ptr [ebx + 0x14], edx
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x18]
        and     ecx, 0x3
        rep     movsb
        mov     edx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x18], ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x28], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ebx + 0x1c], ecx
        mov     ecx, dword ptr [eax + 0x8]
        mov     dword ptr [ebx + 0x20], edx
        mov     edx, dword ptr [eax + 0xc]
        mov     dword ptr [ebx + 0x24], ecx
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x38], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [ebx + 0x2c], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebx + 0x34], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [ebx + 0x3c], ecx
        lea     ecx, [eax + 0x78]
        mov     dword ptr [ebx + 0x30], edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebx + 0x44], eax
        mov     dword ptr [ebx + 0x48], 0x0
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x58]
        pop     edi
        mov     dword ptr [ebx + 0x40], eax
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0x14
    }


}
