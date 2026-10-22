/*
 * FUN_100145a0 (100 B) — __stdcall, RET 0x10.
 * GetSquelchList: calls FUN_1001c7a0 then FUN_1001c660, sums the two
 * length results into *param_4.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);
extern void __cdecl FUN_1001c660(void);

__declspec(naked) void __stdcall func_100145a0(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        push    0x1004a2c4
        push    edi
        push    ecx
        mov     dword ptr [esp + 0x20], 0
        call    FUN_1001c7a0
        test    eax, eax
        jl      done
        mov     eax, dword ptr [esp + 0xc]
        push    0x100502b0
        lea     edx, [esp + 0x10]
        push    edx
        sub     esi, eax
        lea     ecx, [edi + eax*2]
        push    esi
        push    ecx
        mov     ebx, eax
        call    FUN_1001c660
        add     esp, 0x10
        test    eax, eax
        jl      done
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x20]
        add     ebx, ecx
        mov     dword ptr [edx], ebx
    done:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
