/*
 * FUN_004eeeb0 (168 B) — MLR/Adept application core, __thiscall with one
 * stack arg. Asserts via FUN_006fab90("Broken"); builds a local double/vec
 * struct; dispatches on param_1[0x2c] (4/5/6) to virtual calls on the object
 * at [this+0x24]+0x144, else falls back to FUN_004f2350.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_004f2350(void);

__declspec(naked) void FUN_004eeeb0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        push    ebx
        push    edi
        push    0x774c0c
        mov     ebx, ecx
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      Lcc
        int     3
Lcc:
        push    esi
        mov     esi, dword ptr [ebx + 0x24]
        mov     edi, dword ptr [esi + 0x144]
        push    0x0
        call    FUN_00707e70
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ecx + 0x2c]
        add     esi, 0x80
        sub     eax, 0x4
        fstp    qword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x8], esi
        mov     dword ptr [ebp - 0x14], 0xbf800000
        mov     dword ptr [ebp - 0x4], 0x0
        mov     dword ptr [ebp - 0x10], 0x0
        mov     dword ptr [ebp - 0xc], 0xbf800000
        pop     esi
        jz      Lf45
        dec     eax
        jz      Lf36
        dec     eax
        jz      Lf27
        push    ecx
        mov     ecx, ebx
        call    FUN_004f2350
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
Lf27:
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 0x10]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
Lf36:
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x8]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
Lf45:
        mov     eax, dword ptr [edi]
        lea     ecx, [ebp - 0x1c]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x4]
        pop     edi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
