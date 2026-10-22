/*
 * FUN_00664940 (404 B) — ABL object method: dispatches on a virtual state
 * query (vtable+0x110); builds transform/color objects and calls virtual
 * methods (vtable+0x8/+0x4/+0xcc) plus helper thiscalls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a7510(int a, float b, float c, int d);
extern void __cdecl FUN_006a6400(void *a, void *b, void *c, void *d);
extern void __cdecl FUN_0040c5d0(int a);
extern void __cdecl FUN_00664ae0(void *a, void *b, int c, int d, int e);
extern void __cdecl FUN_00662f10(void *p, int g);

extern float g_795440;   /* 0x00795440 */
extern float g_77b63c;   /* 0x0077b63c */

__declspec(naked) void __cdecl FUN_00664940(void)
{
    __asm {
        sub     esp, 0x44
        push    esi
        mov     esi, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x110]
        cmp     al, 1
        jnz     L_649fe
        fld     dword ptr [g_795440]
        push    0x3f4ccccd
        fadd    dword ptr [g_77b63c]
        push    0x41400000
        lea     ecx, [esp + 0x34]
        fstp    dword ptr [esp + 0x5c]
        mov     edi, dword ptr [esp + 0x5c]
        push    edi
        push    0
        call    FUN_006a7510
        push    edi
        lea     ecx, [esp + 0x58]
        push    ecx
        lea     edx, [esp + 0x34]
        push    edx
        lea     eax, [esp + 0x2c]
        push    esi
        push    eax
        mov     dword ptr [esp + 0x68], 0x795448
        call    FUN_006a6400
        add     esp, 0x14
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_0040c5d0
        mov     edx, dword ptr [esi]
        push    0
        push    1
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 8]
        cmp     al, 1
        jnz     L_64ace
        mov     edi, dword ptr [esi]
        push    0
        push    0
        push    0
        lea     ecx, [esp + 0x20]
        push    ecx
        push    esi
        call    FUN_00664ae0
        add     esp, 0xc
        lea     edx, [esp + 0x1c]
        mov     ecx, esi
        push    eax
        push    edx
        call    dword ptr [edi + 4]
        mov     eax, dword ptr [esi]
        push    0x3f800000
        mov     ecx, esi
        call    dword ptr [eax + 0xcc]
        pop     edi
        pop     esi
        add     esp, 0x44
        ret
L_649fe:
        mov     ecx, dword ptr [g_795440]
        push    ecx
        push    esi
        call    FUN_00662f10
        add     esp, 8
        test    al, al
        jz      L_64ace
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x88]
        add     eax, 0x80
        fld     dword ptr [eax + 0x18]
        mov     ecx, esi
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [eax + 0x28]
        mov     eax, dword ptr [esi]
        fstp    dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 8]
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0x10]
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        fadd    dword ptr [esp + 8]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     eax, dword ptr [esi]
        fstp    dword ptr [esp + 8]
        mov     dword ptr [esp + 0x18], ecx
        fld     dword ptr [esp + 0xc]
        push    0
        fadd    dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x20], edx
        push    0
        lea     ecx, [esp + 0x10]
        fstp    dword ptr [esp + 0x14]
        push    ecx
        fld     dword ptr [esp + 0x1c]
        mov     ecx, esi
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x1c]
        call    dword ptr [eax + 8]
        cmp     al, 1
        jnz     L_64ace
        mov     edx, dword ptr [esi]
        push    0
        push    0
        push    1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 4]
L_64ace:
        pop     edi
        pop     esi
        add     esp, 0x44
        ret
    }
}
