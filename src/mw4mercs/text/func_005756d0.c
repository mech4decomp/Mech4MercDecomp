/* FUN_005756d0 (0x005756D0, 370 bytes) */

#ifdef __cplusplus
extern "C" {
#endif

void __declspec(naked) FUN_005756d0(void)
{
    

extern void __cdecl FUN_00580e0f(void);
extern void __cdecl FUN_100566c42(void);
extern void __cdecl FUN_0064e5b8(void);
extern void __cdecl FUN_0064e4e8(void);
extern void __cdecl FUN_0064e09f(void);
extern void __cdecl FUN_0064e096(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fca9c(void);
extern int DAT_007f268c;
extern void __cdecl FUN_10041517e(void);
extern int DAT_007f23b0;
extern void __cdecl FUN_100415162(void);
extern void __cdecl FUN_0058127b(void);
extern void __cdecl FUN_00580e9a(void);
extern void __cdecl FUN_0064dfe0(void);
extern void __cdecl FUN_0065e30b(void);
extern void __cdecl FUN_100408382(void);
__asm {
sub     esp, 0xc
        push    ebp
        push    esi
        mov     esi, [esp + 0x18]
        test    esi, 0xf00000
        push    edi
        mov     dword ptr [esp + 0xc], 0x0
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        jz      normal_path
        lea     eax, [esp + 0xc]
        push    eax
        add     esi, 0xff100000
        push    esi
        call FUN_00580e0f
        add     esp, 0x8
        jmp     after_loop
    normal_path:
        call FUN_100566c42
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call FUN_0064e5b8
        test    al, al
        jz      after_loop
        push    esi
        mov     ecx, edi
        call FUN_0064e4e8
        mov     ebp, eax
        mov     ecx, ebp
        call FUN_0064e09f
        mov     edi, [eax]
        mov     ecx, ebp
        call FUN_0064e096
        cmp     edi, [eax + 0x4]
        jz      after_loop
    loop_start:
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, [ecx]
        mov ecx, dword ptr [DAT_007dab40]
        mov     edx, [edi]
        xor     eax, ecx
        mov     ecx, [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call FUN_1004fca9c
        mov     esi, eax
        test    esi, esi
        jz      next_iter
        mov     eax, [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     next_iter
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, [esi + 0x4]
        push    eax
        call FUN_10041517e
        cmp     al, 0x1
        jnz     next_iter
        mov     esi, [esi + 0x2fc]
        test    esi, esi
        jz      next_iter
        mov eax, dword ptr [DAT_007f23b0]
        mov     ecx, [esi + 0x4]
        push    eax
        call FUN_100415162
        cmp     al, 0x1
        jnz     next_iter
        mov     al, [esi + 0x2f9]
        test    al, al
        jnz     next_iter
        mov     eax, [esp + 0x10]
        cmp     eax, [esp + 0x14]
        mov     [esp + 0x1c], esi
        jz      grow_list
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    eax
        call FUN_0058127b
        mov     eax, [esp + 0x18]
        add     esp, 0x8
        add     eax, 0x4
        mov     [esp + 0x10], eax
        jmp     next_iter
    grow_list:
        push    0x1
        lea     edx, [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, [esp + 0x18]
        call FUN_00580e9a
    next_iter:
        mov     ecx, ebp
        add     edi, 0x4
        call FUN_0064dfe0
        cmp     edi, [eax + 0x4]
        jnz     loop_start
    after_loop:
        mov     esi, [esp + 0xc]
        cmp     esi, [esp + 0x10]
        jz      skip_iter
        mov     edi, [esp + 0x20]
    iter_list:
        mov     ecx, [esi]
        push    edi
        add     ecx, 0x5b0
        call FUN_0065e30b
        mov     eax, [esp + 0x10]
        add     esi, 0x4
        cmp     esi, eax
        jnz     iter_list
        mov     esi, [esp + 0xc]
    skip_iter:
        test    esi, esi
        jz      skip_free
        push    esi
        call FUN_100408382
        add     esp, 0x4
    skip_free:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0xc
        ret
    }


}

#ifdef __cplusplus
}
#endif
