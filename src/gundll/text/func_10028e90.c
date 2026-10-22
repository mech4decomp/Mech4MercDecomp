/*
 * FUN_10028e90 (308 B) - __stdcall, RET 0x10 (4 args).  Registration helper:
 * calls FUN_1001c920(edi, ebp, 0x1004a4d4, ebx, &local), then FUN_1002af80
 * three times with this->+0x24/+0x28/+0x2c, then FUN_1001c660 with a batch
 * of GUIDs (0x10049e50..0x10049c18) and 0x100511b0.  On success stores
 * (local + this->+0x24) into *arg4.  Frees locals via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10028e90(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    esi
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a4d4
        push    ebp
        push    edi
        call    FUN_1001c920
        mov     esi, eax
        test    esi, esi
        jl      L_fail
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x24]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x34], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_fail
        mov     ecx, dword ptr [edi + 0x28]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_fail
        mov     eax, dword ptr [edi + 0x2c]
        lea     edx, [esp + 0x1c]
        push    edx
        push    eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_fail
        mov     ecx, dword ptr [edi + 0x38]
        mov     edx, dword ptr [edi + 0x34]
        mov     eax, dword ptr [edi + 0x30]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    0x10049c18
        push    edx
        mov     edx, dword ptr [esp + 0x24]
        push    0x10049cc0
        push    eax
        mov     eax, dword ptr [esp + 0x28]
        push    0x10049c10
        push    ecx
        push    0x10049cb8
        push    edx
        push    0x10049c08
        push    eax
        push    0x10049e50
        push    0x100511b0
        lea     ecx, [esp + 0x44]
        push    ecx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x40
        test    esi, esi
        jl      L_fail
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x30]
        add     eax, edx
        mov     dword ptr [ecx], eax
L_fail:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x24]
        je      L_f1
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_f1:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [edi + 0x28]
        je      L_f2
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_f2:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, dword ptr [edi + 0x2c]
        je      L_f3
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_f3:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x10
    }
}
