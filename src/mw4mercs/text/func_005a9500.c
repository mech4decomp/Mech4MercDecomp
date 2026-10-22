/*
 * FUN_005a9500 (487 B) — __thiscall; complex initialization/update routine.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_005a9500(void)
{
    

/* extern data/function symbols for absolute-address references */
extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern void __cdecl FUN_1004d1f44(void);
extern void __cdecl FUN_1004da8be(void);
extern void __cdecl FUN_1004193eb(void);
extern void __cdecl FUN_100507f06(void);
extern void __cdecl FUN_1004193c9(void);
extern void __cdecl FUN_100428688(void);
extern void __cdecl FUN_10041fd24(void);
extern void __cdecl FUN_100507ec5(void);
extern void __cdecl FUN_1004e7521(void);
extern void __cdecl FUN_10041e556(void);
extern int DAT_007db098;
extern void __cdecl FUN_1004ceacb(void);
extern void __cdecl FUN_1004d97ab(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_10041fb1d(void);
extern void __cdecl FUN_10041fb35(void);
extern void __cdecl FUN_10041fbde(void);
extern void __cdecl FUN_1004f4eb0(void);
extern void __cdecl FUN_10041fbc9(void);
extern void __cdecl FUN_10041e547(void);
extern void __cdecl FUN_1004d1fec(void);
__asm {
sub     esp, 0x1a0
        push    ebx
        push    edi
        mov     edi, ecx
        mov     eax, [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     cx, word ptr [eax + 0x84]
        cmp cx, word ptr [DAT_007db0ac]
        lea     ebx, [eax + 0x84]
        jnz     cont
        mov     dx, word ptr [ebx + 0x2]
        cmp dx, word ptr [DAT_007db0ae]
        jz      done
    cont:
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x7c]
        call FUN_1004d1f44
        mov     eax, [esp + 0xb0]
        test    eax, eax
        jz      skip
        mov     eax, [esp + 0x90]
        test    eax, eax
        jbe     skip
        push    ebp
        push    esi
        push    ebx
        call FUN_1004da8be
        add     esp, 0x4
        push    0x7b9460
        lea     ecx, [esp + 0x30]
        mov     ebp, eax
        call FUN_1004193eb
        mov     esi, [edi + 0x198]
        lea     eax, [esp + 0xc0]
        push    eax
        mov     ecx, esi
        call FUN_100507f06
        push    eax
        lea     ecx, [esp + 0xf4]
        call FUN_1004193c9
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0xf4]
        call FUN_100428688
        push    0x2
        push    0x0
        push    0x1
        lea     edx, [esp + 0x2c]
        push    edx
        lea     ecx, [esp + 0x3c]
        call FUN_10041fd24
        lea     eax, [esp + 0xc0]
        push    eax
        mov     ecx, esi
        call FUN_100507ec5
        fld     dword ptr [eax + 0xc]
        mov     ecx, [eax + 0x1c]
        mov     edx, [eax + 0x2c]
        fstp    dword ptr [esp + 0x38]
        push    0x8bd5e8
        push    0x8bd5e8
        push    0x0
        push    -0x1
        push    0x2
        push    0x0
        mov     eax, ecx
        mov     [esp + 0x30], ecx
        mov     ecx, edx
        mov     [esp + 0x34], edx
        lea     edx, [esp + 0x44]
        push    edx
        push    ebx
        push    0x2
        push    ebp
        push    0x0
        push    0x2
        mov     [esp + 0x88], ecx
        push    0x90
        lea     ecx, [esp + 0x154]
        mov     [esp + 0x7c], eax
        call FUN_1004e7521
        mov     eax, [esp + 0x120]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x128]
        push    ecx
        lea     ecx, [esp + 0x68]
        call FUN_10041e556
        mov ecx, dword ptr [DAT_007db098]
        call FUN_1004ceacb
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], dl
        mov     ax, word ptr [eax + 0x2]
        push    0x0
        lea     ecx, [esp + 0x14]
        push    ecx
        lea     edx, [esp + 0x64]
        push    edx
        mov     word ptr [esp + 0x1e], ax
        call FUN_1004d97ab
        mov     ebx, eax
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        add     esp, 0xc
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, [ecx + 0x1c]
        xor     ecx, 0x85739531
        mov     edx, [ecx]
        push    ebx
        call    dword ptr [edx + 0x28]
        lea     esi, [edi + 0x234]
        mov     ecx, esi
        call FUN_10041fb1d
        push    ebx
        mov     ecx, esi
        call FUN_10041fb35
        mov     ecx, esi
        call FUN_10041fbde
        mov     ecx, [edi + 0x198]
        push    ecx
        mov     ecx, eax
        call FUN_1004f4eb0
        mov     ecx, esi
        call FUN_10041fbc9
        mov     edx, [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx + 0x48]
        lea     ecx, [esp + 0x5c]
        call FUN_10041e547
        pop     esi
        pop     ebp
    skip:
        lea     ecx, [esp + 0x74]
        call FUN_1004d1fec
    done:
        pop     edi
        pop     ebx
        add     esp, 0x1a0
        ret
    }


}
