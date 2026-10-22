/*
 * FUN_005de750 (1223 B) — __cdecl, 2 params (RET). Reads a large set of
 * pilot/mech AI config fields from the object in esi via virtual calls
 * (offset +0x24), using edi as the "this" for config-string lookups
 * (FUN_00411bf0/00411cb0/00411ec0). Ends with refcount decrements on two
 * buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412a50(void *a, void *b);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d0100(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_005de750(void *a, void *b)
{
    

extern int DAT_007db0a0;
__asm {
sub     esp, 0x58
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x70]
        push    0x1
        lea     eax, [esp + 0x1C]
        push    eax
        xor     ebx, ebx
        push    0x788754
        mov     ecx, edi
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00411bf0
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_00412780
        mov     esi, dword ptr [esp + 0x6C]
        lea     edx, [esp + 0x14]
        push    edx
        push    esi
        call    FUN_00412a50
        add     esp, 8
        push    0x1
        lea     eax, [esp + 0x20]
        push    eax
        push    0x788744
        mov     ecx, edi
        mov     dword ptr [esp + 0x1C], ebx
        call    FUN_00411bf0
        mov     ecx, dword ptr [esp + 0x1C]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        lea     edx, [esp + 0x10]
        push    edx
        push    esi
        call    FUN_00412a50
        add     esp, 8
        push    ebx
        lea     eax, [esp + 0x24]
        push    eax
        push    0x772408
        mov     ecx, edi
        call    FUN_00411bf0
        lea     ecx, [esp + 0x24]
        call    FUN_004d1f10
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        mov ecx, dword ptr [DAT_007db0a0]
        lea     edx, [esp + 0x28]
        push    edx
        call    FUN_004d0100
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x68]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x74]
        push    edx
        push    0x788738
        mov     ecx, edi
        mov     byte ptr [esp + 0x7C], bl
        call    FUN_00411ec0
        mov     al, byte ptr [esp + 0x70]
        mov     edx, dword ptr [esi]
        mov     byte ptr [esp + 0x6C], al
        push    0x1
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     ecx, [esp + 0x74]
        push    ecx
        push    0x788728
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebx
        call    FUN_00411cb0
        mov     edx, dword ptr [esp + 0x70]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x74], edx
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x74]
        push    edx
        push    0x788720
        mov     ecx, edi
        mov     byte ptr [esp + 0x7C], bl
        call    FUN_00411ec0
        mov     al, byte ptr [esp + 0x70]
        mov     edx, dword ptr [esi]
        mov     byte ptr [esp + 0x6C], al
        push    0x1
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     ecx, [esp + 0x74]
        push    ecx
        or      ebp, 0xFFFFFFFF
        push    0x788718
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     edx, dword ptr [esp + 0x70]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x74], edx
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x74]
        push    edx
        push    0x788710
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x6C], eax
        push    0x4
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     ecx, [esp + 0x74]
        push    ecx
        push    0x788708
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     edx, dword ptr [esp + 0x70]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x74], edx
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x74]
        push    edx
        push    0x788700
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x6C], eax
        push    0x4
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     ecx, [esp + 0x74]
        push    ecx
        push    0x7818B4
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     edx, dword ptr [esp + 0x70]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x74], edx
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x74]
        push    edx
        push    0x786CF4
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x6C], eax
        push    0x4
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     ecx, [esp + 0x74]
        push    ecx
        push    0x7886F4
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     edx, dword ptr [esp + 0x70]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x74], edx
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x74]
        push    edx
        push    0x7886E8
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x6C], eax
        push    0x4
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     ecx, [esp + 0x74]
        push    ecx
        push    0x7886DC
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     edx, dword ptr [esp + 0x70]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x74], edx
        call    dword ptr [eax + 0x24]
        mov     dword ptr [esp + 0x70], ebp
        push    ebx
        lea     edx, [esp + 0x74]
        push    edx
        push    0x7886CC
        mov     ecx, edi
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x6C], eax
        push    0x4
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     ecx, [esp + 0x74]
        push    ecx
        push    0x7886BC
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     edx, dword ptr [esp + 0x70]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x74], edx
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x74]
        push    edx
        push    0x7886AC
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x6C], eax
        push    0x4
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     ecx, [esp + 0x74]
        push    ecx
        push    0x78869C
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     edx, dword ptr [esp + 0x70]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x74], edx
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x74]
        push    edx
        push    0x788690
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x6C], eax
        push    0x4
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     ecx, [esp + 0x74]
        push    ecx
        push    0x788684
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     edx, dword ptr [esp + 0x70]
        mov     dword ptr [esp + 0x6C], edx
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x74]
        push    edx
        push    0x788674
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x6C], eax
        push    0x4
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     ecx, [esp + 0x74]
        push    ecx
        push    0x788664
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     edx, dword ptr [esp + 0x70]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x74], edx
        call    dword ptr [eax + 0x24]
        push    ebx
        lea     edx, [esp + 0x74]
        push    edx
        push    0x788658
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     eax, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x6C], eax
        push    0x4
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    ebx
        lea     ecx, [esp + 0x74]
        push    ecx
        push    0x788644
        mov     ecx, edi
        mov     dword ptr [esp + 0x7C], ebp
        call    FUN_00411cb0
        mov     edx, dword ptr [esp + 0x70]
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x74], edx
        call    dword ptr [eax + 0x24]
        lea     ecx, [esp + 0x24]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L_BF4
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_BF4
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_BF4:
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        cmp     eax, ebx
        pop     ebx
        jz      L_C13
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_C13
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_C13:
        add     esp, 0x58
        ret
    }


}
