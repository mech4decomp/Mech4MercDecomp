/*
 * FUN_00501D90 (285 B) — method (__thiscall, ret 0x04)
 *
 * CFLAGS: /O1
 */
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00411f20(void);
extern void __cdecl FUN_00411fd0(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_00412080(void);
extern void __cdecl FUN_00502df0(void);

__declspec(naked) void func_00501d90(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     eax, [ebx+0x5C]
        push    edi
        mov     edi, [esp+0x28]
        push    eax
        push    0x00772408
        mov     ecx, edi
        call    FUN_00411c40
        mov     eax, [ebx+0x000000E0]
        test    eax, eax
        jz      skip_free
        mov     eax, [eax+0x14]
        dec     eax
        mov     dword ptr [esp+0x28], 0x00000000
        jz      load_str1
        dec     eax
        jz      load_str2
        dec     eax
        jne     load_str1
        push    0x00775A9C
        jmp     do_call
    load_str2:
        push    0x00775AB0
        jmp     do_call
    load_str1:
        push    0x00775A88
    do_call:
        lea     ecx, [esp+0x2C]
        call    FUN_00412780
        mov     ecx, [esp+0x28]
        push    ecx
        push    0x00773250
        mov     ecx, edi
        call    FUN_00411c40
    after_str:
        mov     eax, [esp+0x28]
        test    eax, eax
        jz      done
        mov     cl, [eax-0x01]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     done
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
        jmp     done

    skip_free:
        push    0x00775A88
        push    0x00773250
        mov     ecx, edi
        call    FUN_00411c40

    done:
        mov     edx, [ebx+0x10]
        shr     edx, 0x0A
        and     edx, 0xFFFFFF01
        push    edx
        push    0x00776434
        mov     ecx, edi
        call    FUN_00411f20
        mov     eax, [ebx+0x000000D8]
        lea     esi, [eax+0x50]
        mov     eax, [esi+0x0C]
        mov     [esp+0x0C], eax
        mov     ecx, [esi+0x1C]
        lea     eax, [esp+0x0C]
        mov     [esp+0x10], ecx
        mov     edx, [esi+0x2C]
        push    eax
        push    0x0077544C
        mov     ecx, edi
        mov     [esp+0x1C], edx
        call    FUN_00411fd0
        push    esi
        lea     ecx, [esp+0x1C]
        call    FUN_0041acb0
        lea     ecx, [esp+0x18]
        push    ecx
        push    0x00775430
        mov     ecx, edi
        call    FUN_00412080
        mov     edx, [ebx+0x00000140]
        push    edx
        call    FUN_00502df0
        add     esp, 0x04
        push    eax
        push    0x00776428
        mov     ecx, edi
        call    FUN_00411c40
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret     0x0004
    }
}
