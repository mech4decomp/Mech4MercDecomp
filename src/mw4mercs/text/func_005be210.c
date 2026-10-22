/*
 * FUN_005be210 (2316 B) - __thiscall, RET 4 (1 param).
 *
 * Entity state broadcast: iterates entities, builds packets via
 * FUN_0067f7f0/FUN_00681290 for each, then walks several linked lists
 * at this+0x4c4..0x4fc sending per-entity packets.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00416bc0(void *this, void *p);
extern void __fastcall FUN_006810a0(void *this, void *a, void *b);
extern void *__fastcall FUN_00416cc0(void *this);
extern void *__cdecl FUN_0067f7f0(void *p, int n, void *a);
extern void __fastcall FUN_00681290(void *this, void *p, int n, void *a, void *b);
extern void __fastcall FUN_00416c60(void *this);
extern void __fastcall FUN_006812f0(void *this, void *p);
extern void __fastcall FUN_006811c0(void *this);
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void __fastcall FUN_005be210(void *this)
{
    __asm {
        sub     esp, 0x11c
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        lea     eax, [ebp + 0x4b0]
        push    eax
        lea     ecx, [esp + 0xbc]
        call    FUN_00416bc0
        mov     ebx, dword ptr [esp + 0x130]
        mov     esi, dword ptr [ebx + 0x30]
        mov     ecx, dword ptr [ebx + 0x2c]
        push    esi
        push    ecx
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0xc0], 0x77d098
        call    FUN_006810a0
        lea     ecx, [esp + 0xb8]
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jz      final_section
        mov     ebx, dword ptr [ebx + 0x28]
loop_head:
        xor     edx, edx
        mov     dl, byte ptr [edi + 0x14]
        cmp     edx, ebx
        jz      branch_equal
        push    esi
        lea     eax, [esp + 0xf0]
        push    0x0
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x0
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0xf8]
        push    0x8
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x8
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x108]
        push    0xa
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0xa
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x118]
        push    0xb
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0xb
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x128]
        push    0xc
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0xc
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0xe0]
        push    0xe
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0xe
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x120]
        push    0x12
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x12
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        mov     al, byte ptr [edi + 0xdc]
        test    al, al
        jz      packet_done
        push    esi
        lea     eax, [esp + 0xd0]
        push    0x1e
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x1e
        jmp     packet_final
branch_equal:
        mov     al, byte ptr [edi + 0xdc]
        test    al, al
        jz      packet_done
        push    esi
        lea     eax, [esp + 0x110]
        push    0x8
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x8
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x100]
        push    0x9
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x9
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0xd8]
        push    0xa
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0xa
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0xe8]
        push    0xc
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0xc
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x1c]
        push    0xd
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0xd
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x14]
        push    0x13
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x13
packet_final:
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
packet_done:
        lea     ecx, [esp + 0xb8]
        call    FUN_00416cc0
        mov     edi, eax
        test    edi, edi
        jnz     loop_head
        mov     ebx, dword ptr [esp + 0x130]
final_section:
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ebx + 0x28]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        push    esi
        xor     edx, 0x85739531
        mov     edx, dword ptr [edx + ecx*0x8 + 0x3584]
        mov     edi, dword ptr [edx + 0x170]
        lea     eax, [esp + 0x14]
        push    0x1d
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x1d
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x14]
        push    0x1c
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x1c
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x14]
        push    0x1c
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x1c
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x14]
        push    0x1b
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x1b
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x14]
        push    0xf
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0xf
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x14]
        push    0x10
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x10
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x14]
        push    0x11
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x11
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x14]
        push    0x7
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x7
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x14]
        push    0x14
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x14
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x14]
        push    0x19
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x19
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        push    esi
        lea     eax, [esp + 0x14]
        push    0x1a
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        add     esp, 0xc
        push    ecx
        mov     edx, dword ptr [eax]
        push    edx
        push    0x1a
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        mov     ebx, dword ptr [ebp + 0x4c4]
ll_4c4:
        test    ebx, ebx
        jz      ll_4c4_done
        mov     edi, dword ptr [ebx]
        test    edi, edi
        mov     ebx, dword ptr [ebx + 0x4]
        jz      ll_4c4_done
        push    esi
        lea     eax, [esp + 0x14]
        push    0x15
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x15
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        mov     eax, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     eax, edx
        sar     eax, 0x2
        jz      ll_4c4
        mov     eax, edx
        cmp     dword ptr [eax], 0x0
        jz      ll_4c4
        mov     ecx, dword ptr [edi + 0x410]
        sub     ecx, edx
        sar     ecx, 0x2
        jz      ll_4c4_skip
        mov     edi, dword ptr [eax]
        jmp     ll_4c4_send
ll_4c4_skip:
        xor     edi, edi
ll_4c4_send:
        push    esi
        lea     edx, [esp + 0x1c]
        push    0x18
        push    edx
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x18
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        jmp     ll_4c4
ll_4c4_done:
        mov     ebx, dword ptr [ebp + 0x4cc]
ll_4cc:
        test    ebx, ebx
        jz      ll_4cc_done
        mov     edi, dword ptr [ebx]
        test    edi, edi
        mov     ebx, dword ptr [ebx + 0x4]
        jz      ll_4cc_done
        push    esi
        lea     eax, [esp + 0x14]
        push    0x16
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x16
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        mov     eax, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     eax, edx
        sar     eax, 0x2
        jz      ll_4cc
        mov     eax, edx
        cmp     dword ptr [eax], 0x0
        jz      ll_4cc
        mov     ecx, dword ptr [edi + 0x410]
        sub     ecx, edx
        sar     ecx, 0x2
        jz      ll_4cc_skip
        mov     edi, dword ptr [eax]
        jmp     ll_4cc_send
ll_4cc_skip:
        xor     edi, edi
ll_4cc_send:
        push    esi
        lea     edx, [esp + 0x1c]
        push    0x18
        push    edx
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x18
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        jmp     ll_4cc
ll_4cc_done:
        mov     ebx, dword ptr [ebp + 0x4d4]
ll_4d4:
        test    ebx, ebx
        jz      ll_4d4_done
        mov     edi, dword ptr [ebx]
        test    edi, edi
        mov     ebx, dword ptr [ebx + 0x4]
        jz      ll_4d4_done
        push    esi
        lea     eax, [esp + 0x14]
        push    0x15
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x15
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        mov     eax, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     eax, edx
        sar     eax, 0x2
        jz      ll_4d4
        mov     eax, edx
        cmp     dword ptr [eax], 0x0
        jz      ll_4d4
        mov     ecx, dword ptr [edi + 0x410]
        sub     ecx, edx
        sar     ecx, 0x2
        jz      ll_4d4_skip
        mov     edi, dword ptr [eax]
        jmp     ll_4d4_send
ll_4d4_skip:
        xor     edi, edi
ll_4d4_send:
        push    esi
        lea     edx, [esp + 0x1c]
        push    0x18
        push    edx
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x18
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        jmp     ll_4d4
ll_4d4_done:
        mov     ebx, dword ptr [ebp + 0x4dc]
ll_4dc:
        test    ebx, ebx
        jz      ll_4dc_done
        mov     edi, dword ptr [ebx]
        test    edi, edi
        mov     ebx, dword ptr [ebx + 0x4]
        jz      ll_4dc_done
        push    esi
        lea     eax, [esp + 0x14]
        push    0x15
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x15
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        mov     eax, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     eax, edx
        sar     eax, 0x2
        jz      ll_4dc
        mov     eax, edx
        cmp     dword ptr [eax], 0x0
        jz      ll_4dc
        mov     ecx, dword ptr [edi + 0x410]
        sub     ecx, edx
        sar     ecx, 0x2
        jz      ll_4dc_skip
        mov     edi, dword ptr [eax]
        jmp     ll_4dc_send
ll_4dc_skip:
        xor     edi, edi
ll_4dc_send:
        push    esi
        lea     edx, [esp + 0x1c]
        push    0x18
        push    edx
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x18
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        jmp     ll_4dc
ll_4dc_done:
        mov     ebx, dword ptr [ebp + 0x4e4]
ll_4e4:
        test    ebx, ebx
        jz      ll_4e4_done
        mov     edi, dword ptr [ebx]
        test    edi, edi
        mov     ebx, dword ptr [ebx + 0x4]
        jz      ll_4e4_done
        push    esi
        lea     eax, [esp + 0x14]
        push    0x16
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x16
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        mov     eax, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     eax, edx
        sar     eax, 0x2
        jz      ll_4e4
        mov     eax, edx
        cmp     dword ptr [eax], 0x0
        jz      ll_4e4
        mov     ecx, dword ptr [edi + 0x410]
        sub     ecx, edx
        sar     ecx, 0x2
        jz      ll_4e4_skip
        mov     edi, dword ptr [eax]
        jmp     ll_4e4_send
ll_4e4_skip:
        xor     edi, edi
ll_4e4_send:
        push    esi
        lea     edx, [esp + 0x1c]
        push    0x18
        push    edx
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x18
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        jmp     ll_4e4
ll_4e4_done:
        mov     ebx, dword ptr [ebp + 0x4ec]
ll_4ec:
        test    ebx, ebx
        jz      ll_4ec_done
        mov     edi, dword ptr [ebx]
        test    edi, edi
        mov     ebx, dword ptr [ebx + 0x4]
        jz      ll_4ec_done
        push    esi
        lea     eax, [esp + 0x14]
        push    0x16
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x16
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        mov     eax, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     eax, edx
        sar     eax, 0x2
        jz      ll_4ec
        mov     eax, edx
        cmp     dword ptr [eax], 0x0
        jz      ll_4ec
        mov     ecx, dword ptr [edi + 0x410]
        sub     ecx, edx
        sar     ecx, 0x2
        jz      ll_4ec_skip
        mov     edi, dword ptr [eax]
        jmp     ll_4ec_send
ll_4ec_skip:
        xor     edi, edi
ll_4ec_send:
        push    esi
        lea     edx, [esp + 0x1c]
        push    0x18
        push    edx
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x18
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        jmp     ll_4ec
ll_4ec_done:
        mov     ebx, dword ptr [ebp + 0x4f4]
ll_4f4:
        test    ebx, ebx
        jz      ll_4f4_done
        mov     edi, dword ptr [ebx]
        test    edi, edi
        mov     ebx, dword ptr [ebx + 0x4]
        jz      ll_4f4_done
        push    esi
        lea     eax, [esp + 0x14]
        push    0x16
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x16
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        mov     eax, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     eax, edx
        sar     eax, 0x2
        jz      ll_4f4
        mov     eax, edx
        cmp     dword ptr [eax], 0x0
        jz      ll_4f4
        mov     ecx, dword ptr [edi + 0x410]
        sub     ecx, edx
        sar     ecx, 0x2
        jz      ll_4f4_skip
        mov     edi, dword ptr [eax]
        jmp     ll_4f4_send
ll_4f4_skip:
        xor     edi, edi
ll_4f4_send:
        push    esi
        lea     edx, [esp + 0x1c]
        push    0x18
        push    edx
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x18
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        jmp     ll_4f4
ll_4f4_done:
        mov     ebx, dword ptr [ebp + 0x4fc]
ll_4fc:
        test    ebx, ebx
        jz      ll_4fc_done
        mov     edi, dword ptr [ebx]
        test    edi, edi
        mov     ebx, dword ptr [ebx + 0x4]
        jz      ll_4fc_done
        push    esi
        lea     eax, [esp + 0x14]
        push    0x17
        push    eax
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x17
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        mov     eax, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        sub     eax, edx
        sar     eax, 0x2
        jz      ll_4fc
        mov     eax, edx
        cmp     dword ptr [eax], 0x0
        jz      ll_4fc
        mov     ecx, dword ptr [edi + 0x410]
        mov     ebp, edx
        sub     ecx, ebp
        sar     ecx, 0x2
        jz      ll_4fc_skip
        mov     edi, dword ptr [eax]
        jmp     ll_4fc_send
ll_4fc_skip:
        xor     edi, edi
ll_4fc_send:
        push    esi
        lea     edx, [esp + 0x1c]
        push    0x18
        push    edx
        call    FUN_0067f7f0
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax]
        add     esp, 0xc
        push    ecx
        push    edx
        push    0x18
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00681290
        jmp     ll_4fc
ll_4fc_done:
        mov     eax, dword ptr [esp + 0x130]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_006812f0
        lea     ecx, [esp + 0x20]
        call    FUN_006811c0
        lea     ecx, [esp + 0xb8]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x11c
        ret     0x4
    }
}


