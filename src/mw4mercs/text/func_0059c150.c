/* FUN_0059c150 - 930 bytes - Constructor for class with vtable 0x7838c0 */
/* __stdcall, this in ecx, ret 4 */

__declspec(naked) void FUN_0059c150(void)
{
    

extern int DAT_007f2000;
extern void __cdecl FUN_1004d5b06(void);
extern void __cdecl FUN_1005804b7(void);
extern void __cdecl FUN_1005804aa(void);
extern void __cdecl FUN_10058049d(void);
extern void __cdecl FUN_100580490(void);
extern void __cdecl FUN_100580480(void);
extern void __cdecl FUN_1005804b4(void);
extern void __cdecl FUN_10058044e(void);
extern void __cdecl FUN_1005803e8(void);
extern void __cdecl FUN_10058037f(void);
extern void __cdecl FUN_100580310(void);
extern void __cdecl FUN_100412687(void);
__asm {
        mov eax, dword ptr [DAT_007f2000]
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        call FUN_1004d5b06
        lea     edx, [esp + 0x13]
        lea     ebx, [edi + 0x10]
        lea     ebp, [edi + 0x18]
        lea     ecx, [edi + 0x54]
        push    edx
        mov     dword ptr [ebx], 0
        mov     dword ptr [edi + 0x14], 0
        mov     dword ptr [ebp], 0
        mov     dword ptr [edi + 0x1c], 0
        mov     dword ptr [edi + 0x20], 0
        mov     dword ptr [edi + 0x24], 0
        mov     dword ptr [edi + 0x28], 0
        mov     dword ptr [edi + 0x2c], 0
        mov     dword ptr [edi + 0x30], 0
        mov     dword ptr [edi + 0x4c], 0
        mov     dword ptr [edi + 0x50], 0
        call FUN_1005804b7
        lea     eax, [esp + 0x13]
        lea     ecx, [edi + 0x60]
        push    eax
        call FUN_1005804aa
        lea     edx, [esp + 0x13]
        lea     ecx, [edi + 0x6c]
        push    edx
        call FUN_10058049d
        lea     eax, [esp + 0x13]
        lea     ecx, [edi + 0x78]
        push    eax
        call FUN_100580490
        lea     edx, [esp + 0x13]
        lea     ecx, [edi + 0x84]
        push    edx
        call FUN_100580480
        mov     esi, [esp + 0x1c]
        test    esi, esi
        mov     dword ptr [edi], 0x7838c0
        je      loc_59c4e6

        /* esi != NULL - read values from stream */
        mov     eax, [esi]
        push    4
        push    ebx
        mov     ecx, esi
        call dword ptr [eax + 0x20]
        mov     edx, [esi]
        push    4
        push    ebp
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x1c]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x2c]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x30]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x4c]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x50]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]

        lea     ebx, [edi + 0x40]
        mov     ebp, 3

loop_59c290:
        mov     eax, [esi]
        push    4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call dword ptr [eax + 0x20]
        mov     edx, [esp + 0x14]
        mov     eax, [esi]
        push    4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        mov     [ebx - 0xc], edx
        call dword ptr [eax + 0x20]
        mov     edx, [esp + 0x14]
        mov     [ebx], edx
        add     ebx, 4
        dec     ebp
        jne     loop_59c290

        mov     eax, [esi]
        push    4
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        call dword ptr [eax + 0x20]
        mov     eax, [esp + 0x1c]
        mov     edx, eax
        dec     eax
        test    edx, edx
        mov     [esp + 0x1c], eax
        je      loc_59c325

loop_59c2dc:
        mov     eax, [esi]
        push    4
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call dword ptr [eax + 0x20]
        mov     eax, [edi + 0x58]
        mov     edx, [edi + 0x5c]
        cmp     eax, edx
        lea     ecx, [edi + 0x54]
        je      loc_59c309
        test    eax, eax
        je      loc_59c301
        mov     edx, [esp + 0x14]
        mov     [eax], edx
loc_59c301:
        add     eax, 4
        mov     [ecx + 4], eax
        jmp     loc_59c316

loc_59c309:
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        call FUN_1005804b4

loc_59c316:
        mov     eax, [esp + 0x1c]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     [esp + 0x1c], eax
        jne     loop_59c2dc

loc_59c325:
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     eax, [esp + 0x1c]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     [esp + 0x1c], eax
        je      loc_59c38b

loop_59c342:
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     eax, [edi + 0x64]
        mov     edx, [edi + 0x68]
        cmp     eax, edx
        lea     ecx, [edi + 0x60]
        je      loc_59c36f
        test    eax, eax
        je      loc_59c367
        mov     edx, [esp + 0x14]
        mov     [eax], edx
loc_59c367:
        add     eax, 4
        mov     [ecx + 4], eax
        jmp     loc_59c37c

loc_59c36f:
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        call FUN_10058044e

loc_59c37c:
        mov     eax, [esp + 0x1c]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     [esp + 0x1c], eax
        jne     loop_59c342

loc_59c38b:
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     eax, [esp + 0x1c]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     [esp + 0x1c], eax
        je      loc_59c3f1

loop_59c3a8:
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     eax, [edi + 0x70]
        mov     edx, [edi + 0x74]
        cmp     eax, edx
        lea     ecx, [edi + 0x6c]
        je      loc_59c3d5
        test    eax, eax
        je      loc_59c3cd
        mov     edx, [esp + 0x14]
        mov     [eax], edx
loc_59c3cd:
        add     eax, 4
        mov     [ecx + 4], eax
        jmp     loc_59c3e2

loc_59c3d5:
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        call FUN_1005803e8

loc_59c3e2:
        mov     eax, [esp + 0x1c]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     [esp + 0x1c], eax
        jne     loop_59c3a8

loc_59c3f1:
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     eax, [esp + 0x1c]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     [esp + 0x1c], eax
        je      loc_59c45a

loop_59c40e:
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     eax, [edi + 0x7c]
        mov     edx, [edi + 0x80]
        cmp     eax, edx
        lea     ecx, [edi + 0x78]
        je      loc_59c43e
        test    eax, eax
        je      loc_59c436
        mov     edx, [esp + 0x14]
        mov     [eax], edx
loc_59c436:
        add     eax, 4
        mov     [ecx + 4], eax
        jmp     loc_59c44b

loc_59c43e:
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        call FUN_10058037f

loc_59c44b:
        mov     eax, [esp + 0x1c]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     [esp + 0x1c], eax
        jne     loop_59c40e

loc_59c45a:
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     eax, [esp + 0x1c]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     [esp + 0x1c], eax
        je      loc_59c4c9

loop_59c477:
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     eax, [edi + 0x88]
        mov     edx, [edi + 0x8c]
        cmp     eax, edx
        lea     ecx, [edi + 0x84]
        je      loc_59c4ad
        test    eax, eax
        je      loc_59c4a5
        mov     edx, [esp + 0x14]
        mov     [eax], edx
loc_59c4a5:
        add     eax, 4
        mov     [ecx + 4], eax
        jmp     loc_59c4ba

loc_59c4ad:
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        call FUN_100580310

loc_59c4ba:
        mov     eax, [esp + 0x1c]
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     [esp + 0x1c], eax
        jne     loop_59c477

loc_59c4c9:
        lea     eax, [edi + 0x14]
        push    eax
        push    esi
        call FUN_100412687
        mov     edx, [esi]
        add     esp, 8
        push    4
        lea     eax, [edi + 0x90]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]

loc_59c4e6:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
    }


}
