/*
 * FUN_006d1010 (930 B) — Destructor for a large object (this in ECX, __fastcall).
 *
 * Frees a series of member arrays/objects: a small table at +0x3c, arrays at
 * +0x7c/+0xa4/+0xac, four 8-byte slots at +0x58, sub-objects at +0xbc/+0xc0,
 * and several pointer arrays. Calls FUN_004084e0 (free) throughout.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491d10(void);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_006d47f0(void *p);
extern void __cdecl FUN_006e05a0(void *p);
extern void *g_7da848;

__declspec(naked) void __fastcall FUN_006d1010(void *this_)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        mov     eax, 0xffffffe8
        push    esi
        sub     eax, ecx
        push    edi
        mov     dword ptr [esp + 0x10], ecx
        lea     ebx, [ecx + 0x1a]
        lea     ebp, [ecx + 0x3c]
        mov     dword ptr [esp + 0x14], eax
L_6d102c:
        xor     ecx, ecx
        mov     cl, byte ptr [ebx]
        mov     edi, ecx
        test    edi, edi
        jle     L_6d1053
        mov     esi, dword ptr [ebp]
L_6d1039:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0x4]
        mov     ecx, eax
        call    FUN_00491d10
        add     esi, 0x4
        dec     edi
        jnz     L_6d1039
        mov     eax, dword ptr [esp + 0x14]
L_6d1053:
        inc     ebx
        lea     ecx, [eax + ebx]
        add     ebp, 0x8
        cmp     ecx, 0x4
        jl      L_6d102c
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx + 0x80]
        test    eax, eax
        jle     L_6d109b
        mov     esi, dword ptr [ecx + 0x7c]
        mov     edi, eax
L_6d1072:
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jz      L_6d1091
        mov     edx, dword ptr [esi]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
        mov     dword ptr [esi + 0x4], 0x0
L_6d1091:
        add     esi, 0x8
        dec     edi
        jnz     L_6d1072
        mov     ecx, dword ptr [esp + 0x10]
L_6d109b:
        mov     eax, dword ptr [ecx + 0xa8]
        test    eax, eax
        mov     ebx, 0xfffffffd
        jle     L_6d114c
        mov     esi, dword ptr [ecx + 0xa4]
        add     esi, 0x24
        mov     edi, eax
L_6d10b9:
        mov     eax, dword ptr [esi - 0x14]
        test    eax, eax
        jl      L_6d113e
        mov     ecx, dword ptr [ecx + 0xbc]
        cmp     eax, dword ptr [ecx]
        jge     L_6d113e
        mov     eax, dword ptr [esi - 0x20]
        test    eax, eax
        jle     L_6d10e5
        mov     edx, dword ptr [g_7da848]
        mov     ecx, dword ptr [edx + eax*4 + 0x24]
        mov     eax, dword ptr [ecx]
        push    0x0
        call    dword ptr [eax + 0x4]
        and     dword ptr [eax + 0x18], ebx
L_6d10e5:
        mov     eax, dword ptr [esi - 0x4]
        test    eax, eax
        jz      L_6d113e
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        mov     dword ptr [esi], eax
        jz      L_6d1103
L_6d10f5:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        mov     dword ptr [esi], eax
        jnz     L_6d10f5
L_6d1103:
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0xc]
        test    eax, eax
        jz      L_6d112d
L_6d110c:
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [eax + 0x8], 0x0
        mov     eax, dword ptr [eax + 0xc]
        add     esp, 0x4
        test    eax, eax
        jnz     L_6d110c
L_6d112d:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
L_6d113e:
        mov     ecx, dword ptr [esp + 0x10]
        add     esi, 0x34
        dec     edi
        jnz     L_6d10b9
L_6d114c:
        mov     eax, dword ptr [ecx + 0xa8]
        test    eax, eax
        jz      L_6d1177
        mov     edx, dword ptr [ecx + 0xa4]
        push    edx
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x4
        xor     ecx, ecx
        mov     dword ptr [eax + 0xa4], ecx
        mov     dword ptr [eax + 0xa8], ecx
L_6d1177:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx + 0xb0]
        test    eax, eax
        jle     L_6d1231
        mov     esi, dword ptr [ecx + 0xac]
        add     esi, 0x24
        mov     edi, eax
L_6d1194:
        mov     eax, dword ptr [esi - 0x14]
        test    eax, eax
        jl      L_6d1223
        mov     ecx, dword ptr [ecx + 0xbc]
        cmp     eax, dword ptr [ecx]
        jge     L_6d1223
        mov     eax, dword ptr [esi - 0x20]
        test    eax, eax
        jle     L_6d11ca
        jg      L_6d11b6
        xor     ecx, ecx
        jmp     L_6d11c0
L_6d11b6:
        mov     edx, dword ptr [g_7da848]
        mov     ecx, dword ptr [edx + eax*4 + 0x24]
L_6d11c0:
        mov     eax, dword ptr [ecx]
        push    0x0
        call    dword ptr [eax + 0x4]
        and     dword ptr [eax + 0x18], ebx
L_6d11ca:
        mov     eax, dword ptr [esi - 0x4]
        test    eax, eax
        jz      L_6d1223
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        mov     dword ptr [esi], eax
        jz      L_6d11e8
L_6d11da:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        mov     dword ptr [esi], eax
        jnz     L_6d11da
L_6d11e8:
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0xc]
        test    eax, eax
        jz      L_6d1212
L_6d11f1:
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [eax + 0x8], 0x0
        mov     eax, dword ptr [eax + 0xc]
        add     esp, 0x4
        test    eax, eax
        jnz     L_6d11f1
L_6d1212:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
L_6d1223:
        mov     ecx, dword ptr [esp + 0x10]
        add     esi, 0x34
        dec     edi
        jnz     L_6d1194
L_6d1231:
        mov     eax, dword ptr [ecx + 0xb0]
        test    eax, eax
        jz      L_6d125c
        mov     edx, dword ptr [ecx + 0xac]
        push    edx
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x4
        xor     ecx, ecx
        mov     dword ptr [eax + 0xac], ecx
        mov     dword ptr [eax + 0xb0], ecx
L_6d125c:
        mov     eax, dword ptr [esp + 0x10]
        lea     esi, [eax + 0x58]
        mov     edi, 0x4
L_6d1268:
        mov     eax, dword ptr [esi - 0x28]
        test    eax, eax
        jz      L_6d1283
        mov     ecx, dword ptr [esi - 0x2c]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        xor     eax, eax
        mov     dword ptr [esi - 0x2c], eax
        mov     dword ptr [esi - 0x28], eax
L_6d1283:
        cmp     dword ptr [esi], 0x0
        jz      L_6d12a1
        mov     edx, dword ptr [esi - 0x4]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi - 0x4], 0x0
        mov     dword ptr [esi], 0x0
L_6d12a1:
        add     esi, 0x8
        dec     edi
        jnz     L_6d1268
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [eax + 0xbc]
        test    esi, esi
        jz      L_6d12c5
        mov     ecx, esi
        call    FUN_006d47f0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_6d12c5:
        mov     ecx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ecx + 0xc0]
        test    esi, esi
        jz      L_6d12e3
        mov     ecx, esi
        call    FUN_006e05a0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_6d12e3:
        mov     edx, dword ptr [esp + 0x10]
        lea     esi, [edx + 0xbc]
        mov     edi, 0x3
L_6d12f2:
        mov     eax, dword ptr [esi - 0x8]
        sub     esi, 0x8
        test    eax, eax
        jz      L_6d1305
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6d1305:
        dec     edi
        jnz     L_6d12f2
        mov     eax, dword ptr [esp + 0x10]
        lea     esi, [eax + 0xa4]
        mov     edi, 0x4
L_6d1317:
        mov     eax, dword ptr [esi - 0x8]
        sub     esi, 0x8
        test    eax, eax
        jz      L_6d132a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6d132a:
        dec     edi
        jnz     L_6d1317
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx + 0x7c]
        test    eax, eax
        jz      L_6d1366
        mov     ecx, dword ptr [eax - 0x4]
        lea     edi, [eax - 0x4]
        lea     esi, [eax + ecx*8]
        dec     ecx
        js      L_6d135d
        lea     ebx, [ecx + 0x1]
L_6d1347:
        mov     eax, dword ptr [esi - 0x8]
        sub     esi, 0x8
        test    eax, eax
        jz      L_6d135a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6d135a:
        dec     ebx
        jnz     L_6d1347
L_6d135d:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_6d1366:
        mov     edx, dword ptr [esp + 0x10]
        lea     esi, [edx + 0x7c]
        mov     edi, 0x5
L_6d1372:
        mov     eax, dword ptr [esi - 0x8]
        sub     esi, 0x8
        test    eax, eax
        jz      L_6d1385
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6d1385:
        dec     edi
        jnz     L_6d1372
        mov     eax, dword ptr [esp + 0x10]
        lea     esi, [eax + 0x54]
        mov     edi, 0x5
L_6d1394:
        mov     eax, dword ptr [esi - 0x8]
        sub     esi, 0x8
        test    eax, eax
        jz      L_6d13a7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6d13a7:
        dec     edi
        jnz     L_6d1394
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }
}
