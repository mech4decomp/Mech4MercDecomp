// FUN_00543150 (724 bytes)
// __thiscall (ECX = this, stack params at ESP+0x160 and ESP+0x164)
// RET 0x08 - decal directory/file processing function
__declspec(naked) void func_00543150(void)
{
    

extern int DAT_007b8ef0;
extern void __cdecl FUN_006fc43b(void);
extern void __cdecl FUN_006fb6dd(void);
extern void __cdecl FUN_006fc41c(void);
extern void __cdecl FUN_006fb6be(void);
extern void __cdecl FUN_006fc3fd(void);
extern void __cdecl FUN_006fb69f(void);
extern void __cdecl FUN_006fc3de(void);
extern void __cdecl FUN_006fb680(void);
extern void __cdecl FUN_100412462(void);
extern void __cdecl FUN_1004128a9(void);
extern void __cdecl FUN_100412447(void);
extern void __cdecl FUN_1004124a4(void);
extern void __cdecl FUN_1004125f6(void);
extern void __cdecl FUN_10040837e(void);
extern void __cdecl FUN_100408363(void);
extern void __cdecl FUN_10041dcf0(void);
extern void __cdecl FUN_10041df8a(void);
extern void __cdecl FUN_10041de55(void);
extern void __cdecl FUN_10053249d(void);
extern void __cdecl FUN_1005325de(void);
extern void __cdecl FUN_1005322a2(void);
extern void __cdecl FUN_1005325a0(void);
extern void __cdecl FUN_100532264(void);
extern void __cdecl FUN_10041dc67(void);
extern void __cdecl FUN_10040826f(void);
extern void __cdecl FUN_100408254(void);
extern void __cdecl FUN_10053fe42(void);
__asm {
sub     esp, 0x150
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x164]
        mov     eax, dword ptr [esi]
        mov     ebp, ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x0f], 0x00
        mov     byte ptr [esp + 0x0e], 0x00
        call dword ptr [eax + 0x08]
        test    eax, eax
        mov     ebx, dword ptr [esp + 0x160]
        jz      check_flags
        push    edi

loop_top:
        mov     edx, dword ptr [esi]
        push    0x01
        lea     eax, [esp + 0x24]
        xor     edi, edi
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], edi
        mov     byte ptr [esp + 0x68], 0x00
        call dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, edi
        jz      skip_read1
        mov     edx, dword ptr [esi]
        push    eax
        lea     eax, [esp + 0x64]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x20]

skip_read1:
        mov     edx, dword ptr [esi]
        mov     byte ptr [esp + eax*0x1 + 0x60], 0x00
        push    0x01
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], edi
        call dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x04
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], edi
        call dword ptr [edx + 0x20]
        push    0x77b7ac
        mov byte ptr [DAT_007b8ef0], 0x0
        call FUN_006fc43b
        test    al, al
        jnz     skip_mkdir1
        push    0x77b7ac
        call FUN_006fb6dd

skip_mkdir1:
        push    0x77b798
        mov byte ptr [DAT_007b8ef0], 0x0
        call FUN_006fc41c
        test    al, al
        jnz     skip_mkdir2
        push    0x77b798
        call FUN_006fb6be

skip_mkdir2:
        push    0x77b778
        mov byte ptr [DAT_007b8ef0], 0x0
        call FUN_006fc3fd
        test    al, al
        jnz     skip_mkdir3
        push    0x77b778
        call FUN_006fb69f

skip_mkdir3:
        push    0x77b750
        mov byte ptr [DAT_007b8ef0], 0x0
        call FUN_006fc3de
        test    al, al
        jnz     skip_mkdir4
        push    0x77b750
        call FUN_006fb680

skip_mkdir4:
        lea     ecx, [esp + 0x60]
        push    ecx
        lea     ecx, [esp + 0x28]
        call FUN_100412462
        lea     ecx, [esp + 0x24]
        call FUN_1004128a9
        push    0x77b6b0
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x1c], edi
        call FUN_100412447
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x2c]
        push    edx
        push    eax
        lea     ecx, [esp + 0x30]
        call FUN_1004124a4
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call FUN_1004125f6
        mov     eax, dword ptr [esp + 0x28]
        cmp     eax, edi
        jz      skip_refcount1
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount1
        push    eax
        call FUN_10040837e
        add     esp, 0x04

skip_refcount1:
        mov     eax, dword ptr [esp + 0x2c]
        cmp     eax, edi
        jz      skip_refcount2
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount2
        push    eax
        call FUN_100408363
        add     esp, 0x04

skip_refcount2:
        mov     edx, dword ptr [esp + 0x18]
        push    0x01
        push    edx
        lea     ecx, [esp + 0x38]
        call FUN_10041dcf0
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x04]
        push    eax
        lea     ecx, [esp + 0x38]
        call FUN_10041df8a
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call dword ptr [eax + 0x18]
        lea     ecx, [esp + 0x30]
        call FUN_10041de55
        mov     al, byte ptr [ebp + 0x16]
        test    al, al
        jnz     has_weapon
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        mov     ecx, ebp
        call FUN_10053249d
        jmp     cleanup_iter

has_weapon:
        cmp     dword ptr [esp + 0x14], edi
        jnz     check_second_slot
        mov     ecx, ebx
        shl     ecx, 0x07
        add     ecx, ebx
        shl     ecx, 0x03
        sub     ecx, ebx
        mov     edx, dword ptr [ebp + ecx*0x8 + 0x3550]
        lea     edi, [ebp + ecx*0x8 + 0x3550]
        push    edx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x17], 0x01
        call FUN_1005325de
        lea     eax, [esp + 0x60]
        push    eax
        mov     ecx, ebp
        call FUN_1005322a2
        mov     dword ptr [edi], eax
        xor     edi, edi

check_second_slot:
        cmp     dword ptr [esp + 0x14], 0x01
        jnz     cleanup_iter
        mov     ecx, ebx
        shl     ecx, 0x07
        add     ecx, ebx
        shl     ecx, 0x03
        sub     ecx, ebx
        mov     edx, dword ptr [ebp + ecx*0x8 + 0x354c]
        lea     edi, [ebp + ecx*0x8 + 0x354c]
        push    edx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x16], 0x01
        call FUN_1005325a0
        lea     eax, [esp + 0x60]
        push    eax
        mov     ecx, ebp
        call FUN_100532264
        mov     dword ptr [edi], eax
        xor     edi, edi

cleanup_iter:
        lea     ecx, [esp + 0x30]
        call FUN_10041dc67
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, edi
        jz      skip_refcount3
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount3
        push    eax
        call FUN_10040826f
        add     esp, 0x04

skip_refcount3:
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, edi
        jz      skip_refcount4
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount4
        push    eax
        call FUN_100408254
        add     esp, 0x04

skip_refcount4:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call dword ptr [edx + 0x08]
        test    eax, eax
        jnz     loop_top
        pop     edi

check_flags:
        mov     al, byte ptr [ebp + 0x16]
        test    al, al
        jz      done
        mov     al, byte ptr [esp + 0x0f]
        test    al, al
        jz      done
        mov     al, byte ptr [esp + 0x0e]
        test    al, al
        jz      done
        push    ebx
        mov     ecx, ebp
        call FUN_10053fe42

done:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x150
        ret     0x08
    }


}
