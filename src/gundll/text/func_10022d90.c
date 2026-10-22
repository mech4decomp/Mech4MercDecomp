/*
 * FUN_10022D90 (138 B) - __stdcall, RET 0x10 (4 args, arg3 unused).
 * Parses/advances a buffer via FUN_1001c7a0 / FUN_1001c660 (cdecl), building
 * a formatted record from esi->{0x20,0x24,0x28,0x2c} and ebx/edi/&local.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10022D90(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x1004a734
        push    ebx
        push    esi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c7a0
        test    eax, eax
        jl      done
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi + 0x2c]
        push    edx
        mov     edx, dword ptr [esi + 0x24]
        push    0x10049be0
        lea     ecx, [ebx + eax*2]
        sub     edi, eax
        mov     ebp, eax
        mov     eax, dword ptr [esi + 0x28]
        push    eax
        mov     eax, dword ptr [esi + 0x20]
        push    0x10049bcc
        push    edx
        push    0x10049bc8
        push    eax
        push    0x10049bc4
        push    0x10050fa8
        lea     edx, [esp + 0x34]
        push    edx
        push    edi
        push    ecx
        call    FUN_1001c660
        add     esp, 0x30
        test    eax, eax
        jl      done
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebp, ecx
        mov     dword ptr [edx], ebp
done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
